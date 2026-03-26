// Last updated: 3/26/2026, 1:27:10 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st;
        for(int n:nums)st.insert(n);
        int longest = 1;
        for(auto it:st){
            if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x++;
                count++;
            }
            longest = max(longest,count);
            }
        }
        return longest;
    }
};