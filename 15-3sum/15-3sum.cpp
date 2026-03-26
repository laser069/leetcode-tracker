// Last updated: 3/26/2026, 1:28:06 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> triplets;
        for(int i =0;i+2<nums.size();i++){
            if(i>0&&nums[i] == nums[i-1]) continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];

                if(sum == 0){
                    triplets.push_back({nums[i],nums[l++],nums[r--]});
                    
                    while(l<r && nums[r] == nums[r+1])r--;
                    while(l<r && nums[l] == nums[l-1])l++;
                }
                else if(sum<0)l++;
                else{r--;};

            }
        }
return triplets;
    }
};