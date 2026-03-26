// Last updated: 3/26/2026, 1:25:34 PM
class Solution {
public:
int maxconc(string s,char c,int k){
    int l = 0;
    int r = 0;
    int maxconc = 0;
    while(r<s.length()){
        if(s[r]!=c)k--;
        r++;
        while(k<0){
            if(s[l]!=c)k++;
            l++;
        }
    maxconc = max(maxconc,r-l);
    }
    return maxconc;
}
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(maxconc(answerKey,'T',k),maxconc(answerKey,'F',k));
    }
};