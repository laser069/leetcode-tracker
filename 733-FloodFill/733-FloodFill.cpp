// Last updated: 4/24/2026, 4:34:33 PM
class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int color,int sp){
        if(i<0||i>=image.size()||j<0||j>=image[0].size()||image[i][j]!=sp)return;
        image[i][j] = color;
        dfs(image,i+1,j,color,sp);
        dfs(image,i-1,j,color,sp);
        dfs(image,i,j+1,color,sp);
        dfs(image,i,j-1,color,sp);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)return image;
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }  
};