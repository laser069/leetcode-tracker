// Last updated: 4/21/2026, 2:51:24 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int k = 1;
        int zeros = 0;
        int maxCount = 0;
        for(int r = 0;r<n;r++){
            if(nums[r] == 0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l] == 0){
                    zeros--;
                }
                l++;
            }
        maxCount = max(maxCount,r-l+1);
        }
        return maxCount-1;
    }
};