// Last updated: 3/26/2026, 1:25:19 PM
class Solution {
public:

    
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long int sum = 0;
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
            sum+=grid[i][j];
            }
        } 
        if(sum%2!=0)return false;
        long long int copSum = 0;
        for(int r = 0;r<n;r++){
            for(int j = 0;j<m;j++){
                copSum += grid[r][j];
            }

            if(copSum == (sum/2))return true;
        }

        copSum = 0;
        for(int c = 0;c<m;c++){
            for(int j = 0;j<n;j++){
                copSum+=grid[j][c];
            }
            if(copSum == (sum/2))return true;
        }
        return false;
    }
};