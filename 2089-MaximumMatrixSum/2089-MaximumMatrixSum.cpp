// Last updated: 3/26/2026, 1:25:36 PM
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long int totalSum = 0;
        long long int n = matrix.size();
        long long int minVal = LLONG_MAX;
        long long int negCount = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
            
                long long int num = matrix[i][j];
                if(num < 0)negCount++;
                
                long long int absVal = llabs(num);
                totalSum+=absVal;
                minVal = min(minVal,absVal);
            }
        }
        if(negCount%2==0)return totalSum;
        return totalSum-(2*minVal);
    }
};