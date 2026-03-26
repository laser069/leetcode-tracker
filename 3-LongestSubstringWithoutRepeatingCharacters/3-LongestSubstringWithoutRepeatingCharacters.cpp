// Last updated: 3/26/2026, 1:28:11 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int ans=0;
        unordered_map<int,int> hash;
        while(r<s.length()){
            hash[s[r]]++;
            while(hash[s[r]]>1)hash[s[l++]]--;
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;

    }
};