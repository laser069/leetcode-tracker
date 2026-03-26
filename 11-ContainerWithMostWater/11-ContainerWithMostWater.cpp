// Last updated: 3/26/2026, 1:28:12 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxArea = 0;
        int l = 0;
        int r = n-1;
        while(l<r){
            int h = min(height[l],height[r]);
            maxArea = max(maxArea,h*(r-l));
            if(h == height[l]){
                l++;
            }else{
                r--;
            }
        }

        return maxArea;
    }
};