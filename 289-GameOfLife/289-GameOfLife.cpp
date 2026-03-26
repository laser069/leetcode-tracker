// Last updated: 3/26/2026, 1:26:41 PM
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
    vector<vector<int>> directions = 
    {{0, 1}, {1, 0}, {0, -1}, 
     {-1, 0}, {1, 1}, {-1, -1},
     {1, -1}, {-1, 1}};
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                int neighbours = 0;
                for(vector<int> dir:directions){
                    int x = i + dir[0];
                    int y = j + dir[1];
                if(x>=0 && y>=0 && x<n && y<m){
                    if(board[x][y] == 1||board[x][y] == -1)
                    neighbours++;
                }
                }
                if(neighbours == 3 && board[i][j] == 0){
                        board[i][j] = 2;
                }
                if((neighbours<2 || neighbours>3)&& board[i][j] == 1)board[i][j] = -1;                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-1)board[i][j] = 0;
                if(board[i][j]==2)board[i][j] = 1;
            }
        }
    }
};