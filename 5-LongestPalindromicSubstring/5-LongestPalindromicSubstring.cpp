// Last updated: 3/26/2026, 2:45:04 PM
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int n = s.length();
5        int resLen = 0;
6        string res = "";
7        for(int i = 0;i<n;i++){
8            int l = i;
9            int r = i;
10            while(l>=0 && r<n &&s[r] == s[l]){
11                if(resLen<r-l+1){
12                    resLen = r-l+1;
13                    res = s.substr(l,r-l+1);
14                }
15                r++;
16                l--;
17            }
18            l = i;
19            r = i+1;
20            while(l>=0&&r<n&&s[r] == s[l]){
21                if(resLen<r-l+1){
22                    resLen = r-l+1;
23                    res = s.substr(l,r-l+1);
24                }
25                l--;
26                r++;
27            }
28        }
29        return res;
30        
31    }
32};