// Last updated: 3/30/2026, 4:59:12 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        vector<string> words;
5        int i = 0;
6        int j = 0;
7        int n = s.size();
8        
9        while(i<n){
10        while(i<n && s[i] == ' ')i++;
11        if(i>=n)break;
12        j = i;
13        while(j<n&&s[j]!=' ')j++;
14        words.push_back(s.substr(i,j-i));
15        i = j;
16        }
17        string ans = "";
18        int m = words.size();
19        for(int k = m-1;k>=0;k--){
20            ans+=words[k];
21            if(k!=0){
22            ans+=' ';
23            }
24        }
25        return ans;
26
27    }
28};