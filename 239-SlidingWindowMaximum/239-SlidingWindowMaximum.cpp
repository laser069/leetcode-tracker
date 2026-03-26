// Last updated: 3/26/2026, 1:26:45 PM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int l = 0;
        int r = 0;
        while(r<nums.size()){
            while(!dq.empty() && nums[dq.back()]<nums[r])dq.pop_back();
            dq.push_back(r);
            if(l>dq.front()){
                dq.pop_front();
            }
            if((r+1)>= k){
                ans.push_back(nums[dq[0]]);
                l++;
            }
            r++;
        }
        return ans;
    }
};