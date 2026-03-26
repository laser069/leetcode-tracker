// Last updated: 3/26/2026, 1:27:45 PM
class Solution {
public:
    void dfs(vector<int> &nums,vector<int>&ans,vector<vector<int>>&res,vector<bool> &visited){
        if(ans.size() == nums.size()){
            res.push_back(ans);
            return;
        }

        for(int i = 0;i<nums.size();i++){

            if(visited[i]||(i>0 && nums[i] == nums[i-1] &&!visited[i-1]))continue;
            visited[i] = true;
            ans.push_back(nums[i]);
            dfs(nums,ans,res,visited);
            ans.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool> visited(nums.size(),false);

        vector<int>ans;
        vector<vector<int>> res;
        dfs(nums,ans,res,visited);
        return res;

        
    }
};