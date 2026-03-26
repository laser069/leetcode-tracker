// Last updated: 3/26/2026, 1:28:00 PM
class Solution {
public:
    bool isValid(string s) {
        stack<char> brack;
        for(char c:s){
            if(c == '{'||c == '(' || c == '[')brack.push(c);
            else{
                if(brack.empty())return false;

            if((c == ')' && brack.top() == '(')||
            (c == ']' && brack.top() == '[')||
            (c == '}' && brack.top() == '{')){
                brack.pop();
            
            }else{
                return false;
            }
            }
        }
        return brack.empty();
        
    }
};