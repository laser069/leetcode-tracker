// Last updated: 3/26/2026, 1:25:23 PM
class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int num:nums)
            ans += num>nums[ans];
                
    return ans;
    }

};