// Last updated: 4/24/2026, 4:34:54 PM
class Solution {
public:

    string solveStr(string word,int t){
        string ans = "";
        for(int i = 0;i<t;i++){
            ans+=word;
        }
        return ans;
    }

    string decodeString(string s) {
        int n = s.size();
        string ans = "";
        stack<char> st;
        for(int i =0;i<n;i++){
            st.push(s[i]);
            if(st.top() == ']'){
                st.pop();
                string temp = "";
                while(!st.empty() && st.top()!= '['){
                    char c = st.top();
                    temp+=c;
                    st.pop();
                }
                reverse(temp.begin(), temp.end());

                st.pop();
                int num = 0;
                int base = 1;
                while(!st.empty() && isdigit(st.top())){
                    num += (st.top()-'0')*base;
                    base*=10;
                    st.pop();
                }
                string expanded = solveStr(temp,num);
                for(char c:expanded){
                    st.push(c);
                }
            }
        }    
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};