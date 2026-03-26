// Last updated: 3/26/2026, 1:27:55 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int num:nums){
            if(num!=val){
                nums[i++] = num;
            }
        }
        return i;
    }
};