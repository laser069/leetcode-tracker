// Last updated: 4/21/2026, 2:51:29 PM
class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int l = 0;
        int vowCount = 0;
        for (int i =0;i<k;i++){
            vowCount = isVowel(s[i])?vowCount+1:vowCount; 
        }
        int maxCount = vowCount;

        for(int r = k;r<n;r++){
            if(isVowel(s[l]))vowCount--;
            l++;
            if(isVowel(s[r]))vowCount++;
            maxCount = max(vowCount,maxCount);
            
        }  
        return maxCount;
    }
};