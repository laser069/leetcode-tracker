// Last updated: 3/26/2026, 1:25:16 PM
class Solution {

int sumofnum(int n){
    int sum = 0;
    while(n!=0){
        int last = n%10;
        sum+=last;
        n/=10;
    }
    return sum;
}

public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]<10&&nums[i] == i)return i;
                if(sumofnum(nums[i])== i)return i;
            
            }
        
        return -1;
    }
};