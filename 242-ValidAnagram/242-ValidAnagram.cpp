// Last updated: 3/26/2026, 1:26:43 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> h1(26,0);
        vector<int> h2(26,0);
        for(int i = 0; i < s.length(); i++){
            h1[s[i]-'a']++;
            h2[t[i]-'a']++;
        }
        return h1 == h2;
    }
};