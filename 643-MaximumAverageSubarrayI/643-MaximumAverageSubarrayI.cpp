// Last updated: 4/24/2026, 4:34:40 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i =0;i<k;i++){
            sum+=nums[i];
        }
        int n = nums.size();
        int r = k;
        int l = 0;
        int maxSum = sum;
        while(r<n){
            sum+=nums[r++];
            sum-=nums[l++];
            maxSum = max(sum,maxSum);
        }
        return (double)maxSum/k;
    }
};