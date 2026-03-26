// Last updated: 3/26/2026, 1:28:04 PM
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int clo = nums[0]+nums[1]+nums[2];

        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == target)return sum;
                if(abs(clo-target) > abs(sum-target)){
                    clo = sum;
                }
                 if(sum<target){
                    l++;
                }else{r--;}
            }
        }
        return clo;
    }
};