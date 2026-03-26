// Last updated: 3/26/2026, 1:27:49 PM
class Solution {
public:
void dfs(int i,int target,vector<int> candidates,vector<int> &ans,vector<vector<int>> &res){
    if(target == 0){
        res.push_back(ans);
        return;
    }
    if(target<0){
        return;
    }
    for(int s = i;s<candidates.size();s++){
        if(s>i && candidates[s] == candidates[s-1]){
        continue;
        }
        ans.push_back(candidates[s]);
        dfs(s+1,target-candidates[s],candidates,ans,res);
        ans.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> ans;
        dfs(0,target,candidates,ans,res);      
        return res;
    }
};