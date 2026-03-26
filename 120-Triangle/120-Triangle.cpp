// Last updated: 3/26/2026, 1:27:13 PM
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = triangle.size()-2;i>=0;i--){
            for(int j =0;j<=i;j++)
            triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
        }
        return triangle[0][0];
        
    }
};