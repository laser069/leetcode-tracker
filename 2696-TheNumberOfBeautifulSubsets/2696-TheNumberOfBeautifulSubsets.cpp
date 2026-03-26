// Last updated: 3/26/2026, 1:25:22 PM
class Solution {
public:
    int dfs(int i ,int k,vector<int> &nums,unordered_map<int,int> &hash){
        if(i == nums.size())
            return 1;
        

        int ntake = dfs(i+1,k,nums,hash);
        int take = 0;

            if(!hash[nums[i] - k] && !hash[nums[i]+k]){
                hash[nums[i]]++;
                take = dfs(i+1,k,nums,hash);
                hash[nums[i]]--;
            }
        
        return take+ntake;
    }
    
    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        return dfs(0,k,nums,hash)-1;
        
    }
};