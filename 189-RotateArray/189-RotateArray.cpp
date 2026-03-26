// Last updated: 3/26/2026, 1:26:56 PM
class Solution {
public:
    
    void jel(vector<int>& n,int start,int end){
        while(start<end){
            int temp = n[start];
            n[start] = n[end];
            n[end] = temp;
            start++;
            end--;
        }

    }
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
    jel(nums,0,nums.size()-1);
     jel(nums,0,k-1);
     jel(nums,k,nums.size()-1);


        
    }
};