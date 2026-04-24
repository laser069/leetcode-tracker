// Last updated: 4/24/2026, 4:34:55 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sublen = s.size();
        int n = t.size();
        int i = 0;
        int j = 0;
        while(i<sublen && j<n){
            if(s[i]==t[j]){
                i++;j++;
            }
            else{
                j++;
            }
        }
        return i==sublen;
    }
};