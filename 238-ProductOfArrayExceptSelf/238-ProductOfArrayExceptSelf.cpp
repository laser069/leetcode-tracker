// Last updated: 3/26/2026, 1:26:46 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        int left=1;
        int right=1;

        for(int i=n-1;i>=0;i--){
        answer[i] = right;
        right*=nums[i];
        }

        for(int j = 0;j<n;j++){
            answer[j] *= left;
            left*=nums[j];
        }
        return answer;
    }
};