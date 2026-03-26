// Last updated: 3/26/2026, 1:25:43 PM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int s1 = word1.length();
        int s2 = word2.length();
        int i = 0;
        int j = 0;

        while(i<s1 && j<s2){
            ans+=word1[i++];
            ans+=word2[j++];
        }

        while(i<s1){
            ans+=word1[i++];
        }
        while(j<s2){
            ans+=word2[j++];
        }
    return ans;
    }
};