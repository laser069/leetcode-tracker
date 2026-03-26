// Last updated: 3/26/2026, 1:25:59 PM
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int num: nums){
            vector<int> divisors;
            for(int i =1;i<=sqrt(num);i++){
                if(num%i==0){

                if(num/i==i){
                    divisors.push_back(i);
                }else{
                    divisors.push_back(i);
                    divisors.push_back(num/i);
                }
                }
                
            }
            if(divisors.size() == 4){
                int prod=1;
                for(int n:divisors){
                    sum+=n;
                }
            }

        }

        return sum;

        
    }
};