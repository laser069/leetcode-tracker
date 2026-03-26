// Last updated: 3/26/2026, 1:27:46 PM
class Solution {
public:
    void dfs(vector<int> &nums,vector<int> ans,vector<vector<int>> &res,vector<bool> visited){
        if(ans.size() == nums.size()){
            res.push_back(ans);
        }

        for(int i =0;i<nums.size();i++){
            if(visited[i])continue;
            visited[i] = true;
            ans.push_back(nums[i]);
            dfs(nums,ans,res,visited);
            ans.pop_back();
            visited[i] =false;
        }



    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        vector<bool> visited(nums.size(),false);
        dfs(nums,ans,res,visited);
        return res;
        
    }
};