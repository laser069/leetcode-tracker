// Last updated: 4/21/2026, 2:52:05 PM
class Solution {
public:

    int dfs(vector<int>& cost,int step,vector<int>& dp){
        if(step>=cost.size())return 0;
        if(dp[step]!=-1)return dp[step];

        dp[step] = cost[step]+min(dfs(cost,step+1,dp),dfs(cost,step+2,dp));
        return dp[step];
    
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(dfs(cost,0,dp),dfs(cost,1,dp));
    }
};