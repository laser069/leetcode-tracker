// Last updated: 4/24/2026, 4:34:06 PM
class Solution {
public:
    int lenChecker(string &text1,string &text2,int i,int j,vector<vector<int>>& memo){
        if(i<0||j<0)return 0;
        if(memo[i][j] != -1)return memo[i][j];
        if(text1[i]==text2[j])return 1+lenChecker(text1,text2,i-1,j-1,memo);
        memo[i][j] = 0+ max(lenChecker(text1,text2,i-1,j,memo),lenChecker(text1,text2,i,j-1,memo));
        return memo[i][j];
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        vector<vector<int>> memo(n,vector<int>(m,-1));
        return lenChecker(text1,text2,n-1,m-1,memo);

    }
};