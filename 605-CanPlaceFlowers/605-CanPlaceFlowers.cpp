// Last updated: 3/30/2026, 3:13:45 PM
1class Solution {
2public:
3    bool isVowel(char c){
4        char ch = tolower(c);
5        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
6    }
7    string reverseVowels(string s) {
8        int n = s.size();
9        int l = 0;
10        int r = n-1;
11
12        while(l<r){
13            if(isVowel(s[l]) && isVowel(s[r])){
14                char temp = s[l];
15                s[l] = s[r];
16                s[r] = temp;
17                r--;
18                l++;
19            }
20            else if(isVowel(s[l]) && !isVowel(s[r])){
21                r--;
22            }else if(isVowel(s[r]) && !isVowel(s[l])){
23                l++;
24            }else{
25                r--;
26                l++;
27            }
28        }
29        return s;
30    }
31};