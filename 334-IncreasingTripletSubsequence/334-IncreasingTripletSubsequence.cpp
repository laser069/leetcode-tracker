// Last updated: 4/24/2026, 4:35:02 PM
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int smallest = INT_MAX;
        int mid = INT_MAX;

        for(int num:nums){
            if(num>mid){
                return true;
            }
            else if(num<=smallest){
                smallest = num;
            }
            else {
                mid = num;
            }
        }
        return false;
    }
};