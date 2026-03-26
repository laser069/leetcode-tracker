// Last updated: 3/26/2026, 1:27:36 PM
class Solution {
public:
    int gridtravel(int m,int n,map<vector<int>,int> &memo){
        if(memo[{m,n}])return memo[{m,n}];
        if(m == 1 && n == 1) return 1;
        if(m==0||n==0)return 0;
        return memo[{m,n}] = gridtravel(m-1,n,memo)+gridtravel(m,n-1,memo);
    }

    int uniquePaths(int m, int n) {
    map<vector<int>,int> memo;
    return gridtravel(m,n,memo);

    }
};