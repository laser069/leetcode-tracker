// Last updated: 3/26/2026, 1:27:41 PM
class Solution {
public:
    void dfs(int col,int n,vector<vector<string>> &ans,vector<string> board,vector<int> &lrow,vector<int> &lowdi,vector<int> &highdi){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0;row<n;row++){
            if(lowdi[row+col] == 0 && lrow[row] == 0 && highdi[(n-1)+(col-row)] == 0){
                lowdi[row+col] = 1;
                lrow[row] = 1;
                highdi[(n-1)+(col-row)] = 1;
                board[row][col] = 'Q';
                dfs(col+1,n,ans,board,lrow,lowdi,highdi);
                board[row][col] = '.';
                lowdi[row+col] = 0;
                lrow[row] = 0;
                highdi[(n-1)+(col-row)] = 0;
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n,string(n,'.'));

        vector<int> lrow(n,0);
        vector<int> lowdi((2*n)-1,0);
        vector<int> highdi((2*n)-1,0);
        dfs(0,n,ans,board,lrow,lowdi,highdi);   
        return ans;
    }
};