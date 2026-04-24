// Last updated: 4/24/2026, 4:35:32 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int lowestPrice = prices[0];
        int maxProfit = 0;
        
        for(int i = 0;i<n;i++){
            int profit = prices[i]-lowestPrice;
            lowestPrice = min(lowestPrice,prices[i]);
            maxProfit = max(profit,maxProfit);
        }
        return maxProfit;
    }
};