// Last updated: 4/21/2026, 2:51:22 PM
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int freq1[26]{};
        int freq2[26]{};

        for(char c:word1){
            freq1[c-'a']++;
        }

        for(char c:word2){
            freq2[c-'a']++;
        }

        for(int i=0;i<26;i++){
            if((freq1[i]==0) != (freq2[i]==0)){
                return false;
            }
        }

        sort(freq1,freq1+26);
        sort(freq2,freq2+26);
        
        for(int i=0;i<26;i++){
            if((freq1[i] != freq2[i])){
                return false;
            }
        }        
        
        return true;
        
    }
};