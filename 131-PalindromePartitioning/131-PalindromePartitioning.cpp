// Last updated: 3/26/2026, 1:27:09 PM
class Solution {
public:
    void dfs(int ind,string s,vector<string> &ans,vector<vector<string>> &res){
        if(ind == s.length()){
            res.push_back(ans);
            return;
        }

        for(int i =ind;i<s.length();i++){
            if(isPalindrome(s,ind,i)){
            ans.push_back(s.substr(ind,i-ind+1));
            dfs(i+1,s,ans,res);
            ans.pop_back();
            }
        }

    }
    bool isPalindrome(string s,int start,int end){
        while(start<=end){if(s[start++]!=s[end--]){return false;}}
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        dfs(0,s,ans,res);
        return res;
    }
};