// Last updated: 3/26/2026, 1:27:40 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curm = 0;
        int globm = INT_MIN;

        for(int i =0;i<nums.size();i++){
            curm += nums[i];
            globm = max(globm,curm);
            if(curm <0){
                curm = 0;
            }
        }
        return globm;
        
    }
};