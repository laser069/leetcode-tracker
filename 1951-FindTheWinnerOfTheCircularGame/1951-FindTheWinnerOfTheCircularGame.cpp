// Last updated: 3/26/2026, 1:25:39 PM
class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans = 0;
        for(int i =2;i<=n;i++){
            ans = (ans+k)%i;

        }
        return ans+1;
        
    }
};