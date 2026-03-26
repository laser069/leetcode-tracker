// Last updated: 3/26/2026, 1:26:59 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;

        while(l<r){
            int num = numbers[l]+numbers[r];
            if(num == target){
                return {l+1,r+1};

            }
            else if(num < target){
                l++;
            }else{
                r--;
            }

        }
        return {-1,-1};
        
    }
};