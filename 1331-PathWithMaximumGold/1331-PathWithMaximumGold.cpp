// Last updated: 3/26/2026, 1:25:57 PM
class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>> &grid){
        return !(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j] == 0);
    }

    int gold(int i,int j,vector<vector<int>> &grid){
        if(!isValid(i,j,grid))return 0;

        int temp = grid[i][j];
        grid[i][j] = 0;
        int up = gold(i-1,j,grid);
        int down = gold(i+1,j,grid);
        int left = gold(i,j-1,grid);
        int right = gold(i,j+1,grid);
        grid[i][j] = temp;
        int maxX = max(up,down);
        int maxY = max(left,right);
        return grid[i][j] + max(maxX,maxY);
    }


    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                maxGold = max(maxGold,gold(i,j,grid)); 
            }
        }
    return maxGold;
    }
};