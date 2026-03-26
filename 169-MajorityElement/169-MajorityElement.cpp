// Last updated: 3/26/2026, 1:26:57 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int i:nums){
            hash[i]++;
        }
        int max = 0;
        for(auto it = hash.begin();it!=hash.end();it++){
            if(it->second>n/2){
            max = max<it->second?it->first:max;
            }

        }
        return max;
    }
};