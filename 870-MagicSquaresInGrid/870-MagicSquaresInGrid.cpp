// Last updated: 3/26/2026, 1:26:16 PM
class Solution {
public:
    bool isValidBox(vector<vector<int>> grid){
        int n = grid.size();
        int m = grid[0].size();
        bool seen[10] = {false};
        int rsum[3] = {0};
        int csum[3] = {0};
        int dia1 = 0;
        int dia2 = 0;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(i==j)dia1+=grid[i][j];
                if(i+j == 2)dia2+=grid[i][j];
                rsum[i] += grid[i][j];
                csum[j] += grid[i][j];
                int num = grid[i][j];
                if(num<1 ||num>9)return false;
                if(seen[num])return false;
                seen[num] = true;

                // hash[num]++;
            }
        }
    int tar = rsum[0];

    for(int i = 0;i<3;i++){
        if(rsum[i] != tar)return false;

        if(csum[i] != tar)return false;
    }
    return dia1 == tar && dia2 == tar;
    }


    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        // int nLimit = n-3;
        int count = 0;
        for(int i =0;i<n-2;i++){
            for(int j = 0;j<m-2;j++){
                vector<vector<int>> ans(3,vector<int>(3));
                int x=0;
                for(int k = i;k<=i+2;k++){
                    int y = 0;
                    for(int l=j;l<=j+2;l++){
                        ans[x][y++] = grid[k][l];
                    }
                    x++;
                }
                if(isValidBox(ans)){
                    count++;
                }
            }
        }
        return count;
    }
};