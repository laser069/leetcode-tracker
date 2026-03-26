// Last updated: 3/26/2026, 1:27:48 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = 0;
        vector<int> lwall(n);
        vector<int> rwall(n);
        for(int i =0;i<n;i++){
            int j = n-i-1;
            lwall[i] = l;
            rwall[j] = r;
            l = max(l,height[i]);
            r = max(r,height[j]);
        }
        int sum = 0;
        for(int i =0;i<n;i++){
            int mini = min(lwall[i],rwall[i]);
            sum+= mini-height[i]>0?mini-height[i]:0;
        }
        return sum;
        
    }
};