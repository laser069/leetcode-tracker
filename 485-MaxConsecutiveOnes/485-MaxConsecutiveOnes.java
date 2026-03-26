// Last updated: 3/26/2026, 1:26:34 PM
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0;
        int maxlen = 0;
        for(int i =0;i<nums.length;i++){
            int num = nums[i];
            if(num == 1){
                count++;
                maxlen = maxlen<count?count:maxlen;
            }else{
                count = 0;
            }
        }
        return maxlen;
    }
}