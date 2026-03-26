// Last updated: 3/26/2026, 1:27:30 PM
class Solution {
public:
    void dfs(int i ,vector<int> &nums,vector<int> &ans,vector<vector<int>> &res){
        if(i == nums.size()){
            res.push_back(ans);
            return;
        }
        dfs(i+1,nums,ans,res);
        ans.push_back(nums[i]);
        dfs(i+1,nums,ans,res);
        ans.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        dfs(0,nums,ans,res);
        return res;
        
    }
};