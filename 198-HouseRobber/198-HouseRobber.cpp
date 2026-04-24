// Last updated: 4/24/2026, 4:35:22 PM
class Solution {
public:
    
    int dfs(vector<int>& nums,vector<int>& dp,int i){
        if(i>=nums.size())return 0;
        
        if(dp[i]!=-1)return dp[i];

        dp[i] = max(nums[i]+dfs(nums,dp,i+2),dfs(nums,dp,i+1));
        
        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return max(dfs(nums,dp,0),dfs(nums,dp,1));
    }
};