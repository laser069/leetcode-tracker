// Last updated: 3/26/2026, 1:26:33 PM
class Solution {
public:
    void dfs(int i,int lastnum,vector<int>nums,vector<int> ans,vector<vector<int>> &res){
        if(i == nums.size()){
            if(ans.size()>1){
                res.push_back(ans);
            }
            return;
        }
    
    if(nums[i]>=lastnum){
        ans.push_back(nums[i]);
        dfs(i+1,nums[i],nums,ans,res);
        ans.pop_back();
    }if(nums[i]!=lastnum){
        dfs(i+1,lastnum,nums,ans,res);
    }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
    int minint = -1000000;
    vector<int> ans;
    vector<vector<int>> res;
    dfs(0,minint,nums,ans,res);
    return res;
    }
};