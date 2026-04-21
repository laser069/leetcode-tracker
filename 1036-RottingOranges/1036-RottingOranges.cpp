// Last updated: 4/21/2026, 2:51:50 PM
class Solution {
public:
    bool isValid(int n,int m,int i,int j){
        return i<n && i>=0 && j<m && j>=0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int fresh = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==1)fresh++;
                if(grid[i][j]==2)q.push({i,j});
            }
        }
        if (fresh==0)return 0;
        int dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
        int step = 0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto [x,y] = q.front();
                q.pop();
                for(auto d:dir){
                    int x1 = x+d[0];
                    int y1 = y+d[1];
                    if(isValid(n,m,x1,y1) && grid[x1][y1]==1){
                        q.push({x1,y1});
                        grid[x1][y1] = 2;
                        fresh--;
                    }
                }
            }
            step++;
        }
        return fresh>0?-1:step-1;

    }
};