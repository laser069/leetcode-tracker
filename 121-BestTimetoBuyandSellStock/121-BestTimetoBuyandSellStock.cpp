// Last updated: 3/30/2026, 11:17:44 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int n = prices.size();
5        int lowestPrice = prices[0];
6        int maxProfit = 0;
7        
8        for(int i = 0;i<n;i++){
9            int profit = prices[i]-lowestPrice;
10            lowestPrice = min(lowestPrice,prices[i]);
11            maxProfit = max(profit,maxProfit);
12        }
13        return maxProfit;
14    }
15};