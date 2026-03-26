// Last updated: 3/26/2026, 1:27:44 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> grps;

        for(string s:strs){
            string key = s;
            sort(key.begin(),key.end());
            grps[key].push_back(s);
        }
        
    vector<vector<string>> ans;
    for(auto& [key,grp]:grps){
        ans.push_back(grp);
    }
    return ans;
    }
};