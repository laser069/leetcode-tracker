// Last updated: 3/26/2026, 1:27:50 PM
class Solution {
public:
    void dfs(int s,int tar,vector<int> & candidates,vector<int> &ans, vector<vector<int>> & res){
        if(tar == 0){
            res.push_back(ans);
            return;
        }if(tar<0)return;

        for(int i = s;i<candidates.size();i++){
            ans.push_back(candidates[i]);
            dfs(i,tar-candidates[i],candidates,ans,res);
            ans.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        dfs(0,target,candidates,ans,res);
        return res;
    }
};