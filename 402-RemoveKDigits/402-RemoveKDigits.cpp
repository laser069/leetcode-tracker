// Last updated: 3/26/2026, 1:26:40 PM
class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(char c:num){
            while(k>0 && !s.empty() && s.back()>c){
                s.pop_back();
                k--;
            }
            s+=c;
        }
        while(k>0){
            s.pop_back();
            k--;
        }
        int i = 0;
        while(i<s.length() && s[i] == '0'){
            i++;
        }
        string ans = s.substr(i);
        return ans.empty()?"0":ans;
    }
};