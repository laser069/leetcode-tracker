// Last updated: 3/26/2026, 1:26:38 PM
class Solution {
public:
    int sumarr(vector<int> &nums){
        int num = 0;
        for(int i :nums){
            num+=i;
        }
        return num;
    }

    bool f(int i,int tar,vector<int> &nums,vector<vector<int>> &dp){
        if(tar == 0)return true;
        if(i == 0)return nums[0] == tar;
        if(dp[i][tar] != -1)return dp[i][tar];
        bool ntake = f(i-1,tar,nums,dp);
        bool take = false;
        if(nums[i]<tar) take = f(i-1,tar-nums[i],nums,dp);
        return dp[i][tar] = take || ntake;

    }

    bool canPartition(vector<int>& nums) {
    int S = sumarr(nums);
    vector<int> ans;
    int n = nums.size();
    if(S%2!=0)return false;
    int tar = S/2;
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));

    return f(n-1,tar,nums,dp);

        
    }
};