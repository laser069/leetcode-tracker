// Last updated: 3/26/2026, 1:28:10 PM
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int l,r;
        int maxlen = 0;
        string res;
        for(int i =0;i<n;i++){
            l = i-1;
            r = i;
            while(l>=0 && r<n && s[l] == s[r]){
                if(r-l+1>maxlen){
                    maxlen = r-l+1;
                    res = s.substr(l,r-l+1);
                }
                r++;
                l--;            
            }
            l = i;
            r = i;
            while(l>=0 && s[l] == s[r]){
                if(r-l+1>maxlen){
                    maxlen = r-l+1;
                    res = s.substr(l,r-l+1);
                }
                r++;
                l--;
            }
        }
        return res;
        
    }
};