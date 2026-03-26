// Last updated: 3/26/2026, 1:26:01 PM
class Solution {
public:
    int tribonacci(int n) {
        vector<int> memo(n+1,0);
        if(n<2)return n;
        if(n == 2)return 1;
        memo[0] = 0;
        memo[1] = 1;
        
        memo[2] = 1;
        for(int i = 3;i<=n;i++){
            memo[i] = memo[i-1]+memo[i-2]+memo[i-3]; 
            cout<<memo[i]<<" ";
        }
        return memo[n];

    }
};