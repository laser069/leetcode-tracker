// Last updated: 3/26/2026, 1:27:54 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int stlen = needle.length();
        if(needle.length() > haystack.length())return -1;
        for(int i =0;i<=haystack.length()-stlen;i++){
            string wor = haystack.substr(i,stlen);
            if(wor == needle)return i;
        }
        return -1;
        
    }
};