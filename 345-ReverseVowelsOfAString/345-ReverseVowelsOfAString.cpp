// Last updated: 4/24/2026, 4:34:59 PM
class Solution {
public:
    bool isVowel(char c){
        char a = tolower(c);
        return a == 'a'|| a == 'e' || a == 'i' || a=='o'|| a=='u';
    }
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            if(isVowel(s[l]) && isVowel(s[r])){
                char temp = s[l];
                s[l] = s[r];
                s[r] = temp;
                r--;
                l++;
            }
            else if(!isVowel(s[l])&&isVowel(s[r])){
                l++;
            }
            else if(!isVowel(s[r])&&isVowel(s[l])){
                r--;
            }else{
                l++;
                r--;
            }
        }
        return s;
    }
};