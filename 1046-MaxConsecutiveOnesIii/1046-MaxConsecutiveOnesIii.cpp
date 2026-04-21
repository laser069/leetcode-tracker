// Last updated: 4/21/2026, 2:51:49 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int maxCount = 0;
        int zero = 0;
        while(r<n){
            if(nums[r]==0){
                if(zero<k){
                    count++;
                }else if(zero>=k){
                    while(nums[l]!=0){
                        l++;
                        count--;

                    }
                    l++;
                    zero--;
                }
                zero++;
            }
            else{
                count++;
            }
            r++;
            maxCount = max(count,maxCount);
        }
        return maxCount;
        
    }
};