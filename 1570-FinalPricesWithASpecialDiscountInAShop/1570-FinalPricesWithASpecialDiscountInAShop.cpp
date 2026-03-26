// Last updated: 3/26/2026, 1:25:55 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        vector<int> ans(n);
        for(int i =n-1;i>=0;i--){
            while(!st.empty() && prices[i]<prices[st.top()]){
                st.pop();
            }
            ans[i] = prices[i] - (st.empty()?0:prices[st.top()]);
            
            st.push(i);
        }
        return ans;
    }
};