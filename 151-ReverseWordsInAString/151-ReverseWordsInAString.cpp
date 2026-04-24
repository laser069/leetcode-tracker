// Last updated: 4/24/2026, 4:35:26 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();        
        int l = 0;
        int r = l;
        vector<string> ans;
        while(l<n){
            while(l<n&&s[l] == ' ')l++;
            if(l>=n)break;
            r = l;
            while(r<n&&s[r]!= ' ')r++;
            ans.push_back(s.substr(l,r-l));
            l = r;
        }
        string answer = "";
        int m = ans.size();
        for(int i = m-1;i>=0;i--){
            answer+=ans[i];
            if(i != 0){
            answer+= " ";
            }
        }
        return answer;

    }
};