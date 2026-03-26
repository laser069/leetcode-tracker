// Last updated: 3/26/2026, 1:27:27 PM
class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        int[] left = new int[n];
        int[] right = new int[n];
        Stack<Integer> stack = new Stack<>();
        Arrays.fill(right,n);
        
        for(int i = 0;i<n;i++){
            while(!stack.isEmpty() && heights[stack.peek()]>=heights[i]){
                right[stack.pop()] = i;
            }

            left[i] = stack.isEmpty()?-1:stack.peek();
            stack.push(i);
        }

        int maxArea = 0;
        for(int i =0;i<n;i++){
            int width = right[i]-left[i]-1;
            int area = heights[i] * width;
            maxArea = maxArea>area?maxArea:area;
        }
        return maxArea;
    }
}