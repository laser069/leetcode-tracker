// Last updated: 3/26/2026, 1:27:28 PM
class Solution {
public:
    bool dfs(int s,vector<vector<char>> & board,int i,int j,string word){
        if(i<0 || i==board.size() || j<0 || j==board[0].size() || board[i][j] == '*' || board[i][j] != word[s]){
            return false;
        }
        if(s == word.length()-1)return true;
        char c = board[i][j];
        board[i][j] = '*';
        bool exist = dfs(s+1,board,i+1,j,word)||dfs(s+1,board,i-1,j,word)||dfs(s+1,board,i,j-1,word)||dfs(s+1,board,i,j+1,word);
        board[i][j] = c;
        return exist;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i =0;i<board.size();i++){
            for(int j =0;j<board[i].size();j++){
                if(dfs(0,board,i,j,word))return true;
            }
        }
    return false;
    }
};