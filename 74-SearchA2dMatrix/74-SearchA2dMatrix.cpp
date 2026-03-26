// Last updated: 3/26/2026, 1:27:33 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            if (matrix.empty() || matrix[0].empty()) return false;

        int n = matrix.size();
        int m = matrix[0].size(); 
        int l = 0;
        int r = n*m-1;

        while(l<=r){
            int mid = l+(r-l)/2;
            int row = mid/m;
            int col = mid%m;
            if(matrix[row][col] == target)return true;

            if(matrix[row][col]>target){
                r = mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};