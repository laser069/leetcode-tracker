// Last updated: 4/21/2026, 2:52:03 PM
class Solution {
public:
    const int MOD = 1000000007;

    int dfs(int k, vector<int>& dp) {
        if (k == 0) return 1;
        if (k == 1) return 1;
        if (k == 2) return 2;

        if (dp[k] != -1) return dp[k];

        long long take =
            (2LL * dfs(k - 1, dp) % MOD + dfs(k - 3, dp) % MOD) % MOD;

        dp[k] = (int)take;
        return dp[k];
    }

    int numTilings(int n) {
        vector<int> dp(n + 1, -1);
        return dfs(n, dp);
    }
};