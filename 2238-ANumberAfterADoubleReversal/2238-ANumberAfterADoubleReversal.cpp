// Last updated: 3/26/2026, 1:25:30 PM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int cop = num;
        if(num == 0){
            return true;
        }
        while(num%10 == 0){
            num /= 10;
        }
        int rev = 0;
        int n = 0;
        while(num!=0){
            int i = num%10;
            rev += i * pow(10,n);
            n++;
            num/=10;
        }
        return cop == rev; 
    }
};