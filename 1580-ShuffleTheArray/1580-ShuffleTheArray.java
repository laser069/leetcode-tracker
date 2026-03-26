// Last updated: 3/26/2026, 1:25:48 PM
class Solution {
    public int[] shuffle(int[] nums, int n) {
        int m = n*2;
        int[] ans = new int[m];

        for(int i =0;i<n;i++){
            ans[i*2] = nums[i];
            ans[m-1-i*2] = nums[m-1-i];
        }

        return ans;
        
    }
}