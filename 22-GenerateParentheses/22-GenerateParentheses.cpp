// Last updated: 3/26/2026, 1:27:58 PM
class Solution {
public:
    void backtracking(int open,int close,int n,vector<string> &ans, string res){
        if((open + close == 2*n)){
            ans.push_back(res);
            return;
        }
        if(open<n){
            backtracking(open+1,close,n,ans,res+'(');
        }
        if(close<open){
            backtracking(open,close+1,n,ans,res+')');
            
        }
        
    }
    vector<string> generateParenthesis(int n) {
        string res = "";
        vector<string> ans;
        backtracking(0,0,n,ans,res);
        return ans;
    }
};