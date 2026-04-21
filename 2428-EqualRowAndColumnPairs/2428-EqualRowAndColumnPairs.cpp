// Last updated: 4/21/2026, 2:51:03 PM
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>,int> hashRow;
        map<vector<int>,int> hashCol;

        for(int i=0;i<n;i++){
            vector<int> row;  
            vector<int> col;  
            for(int j = 0;j<n;j++){
                row.push_back(grid[i][j]);    
                col.push_back(grid[j][i]);    
            }
            hashRow[row]++;
            hashCol[col]++;
        }
        int count = 0;

        for(const auto &pair:hashCol){
            if(hashRow.find(pair.first) != hashRow.end()){
                    count += hashRow[pair.first] * pair.second;
            }
        }
        return count;
    }
};