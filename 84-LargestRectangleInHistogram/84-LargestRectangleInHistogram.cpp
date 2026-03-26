// Last updated: 3/26/2026, 1:27:32 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();
        for(int i =0;i<n;i++){
            while(!st.empty()&&heights[st.top()]>heights[i]){
                int ele = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty()?-1:st.top();
                maxArea = maxArea<(heights[ele] * (nse-pse-1))?heights[ele] * (nse-pse-1):maxArea;
            }
            st.push(i);
        }
        while(!st.empty()){

            int ele = st.top();
            st.pop();
            int nse = n;
            int pse = st.empty()?-1:st.top();
            maxArea = maxArea<(heights[ele] * (nse-pse-1))?heights[ele] * (nse-pse-1):maxArea;
        }
        return maxArea;

        
    }
};