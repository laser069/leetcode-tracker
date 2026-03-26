// Last updated: 3/26/2026, 1:26:23 PM
class Solution {
    public int[] findErrorNums(int[] nums) {
        int n = nums.length;

        long S = 0; // d - m
        long P = 0; // d^2 - m^2

        for (int i = 0; i < n; i++) {
            S += nums[i] - (i + 1);
            P += (long) nums[i] * nums[i] - (long) (i + 1) * (i + 1);
        }

        long sumDM = P / S;        // d + m
        int duplicate = (int) ((S + sumDM) / 2);
        int missing = (int) (duplicate - S);

        return new int[]{duplicate, missing};
    }
}
