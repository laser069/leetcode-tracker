// Last updated: 3/26/2026, 1:27:39 PM
class Solution {
public:
    string getPermutation(int n, int k) {
        string ans;
        int fact = 1;
        vector<int> nums;
        for(int i =1;i<n;i++){
            fact*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k--;
        while(true){
            ans+= to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size() == 0)break;
            k%=fact;
            fact = fact/nums.size();
        }
        return ans;

        
    }
};