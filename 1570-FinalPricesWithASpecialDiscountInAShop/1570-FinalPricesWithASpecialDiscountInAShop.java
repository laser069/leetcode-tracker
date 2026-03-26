// Last updated: 3/26/2026, 1:25:49 PM
class Solution {
    public int[] finalPrices(int[] prices) {
        int n = prices.length;
        Stack<Integer> st = new Stack<>();
        for(int i = n-1;i>=0;i--)
        {   int x = prices[i];
            while(!st.isEmpty()&& x<st.peek())
            {
                st.pop();
            }
            if(!st.isEmpty())
            {
                prices[i] -= st.peek();
            }
            st.push(x);
        }
    return prices;    
    }
}