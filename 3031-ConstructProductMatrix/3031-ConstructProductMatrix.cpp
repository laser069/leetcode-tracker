// Last updated: 3/26/2026, 1:25:18 PM
class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m,1));
        int left = 1;
        int right = 1;

        for(int i = (n*m)-1;i>=0;i--){
            int row = i/m;
            int col = i%m;
            ans[row][col] =right%12345;
            right=(1LL*right*grid[row][col])%12345;
        }

        for(int j = 0 ;j<(n*m);j++){
            int row = j/m;
            int col = j%m;
            ans[row][col] = (ans[row][col]*left)%12345;
            left=(1LL*left*grid[row][col])%12345;
        }

        return ans;
    }
};