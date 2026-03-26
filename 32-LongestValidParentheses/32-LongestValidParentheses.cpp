// Last updated: 3/26/2026, 1:27:53 PM
class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int maxi = 0;
        for(int i =0;i<n;i++){
            if(s[i] == '('){
                l++;
            }   
            else{
                r++;
            }

            if(l == r){
                maxi = max(maxi,l*2);

            }else if(r>l){
                l = 0;
                r = 0;
                
            }
        }
        l = 0;
        r = 0;
        for(int i=n-1;i>=0;i--){
            if(s[i] == '('){
                l++;
            }   
            else{
                r++;
            }

            if(l == r){
                maxi = max(maxi,l*2);

            }else if(l>r){
                l = 0;
                r = 0;
                
            }
        }
       return maxi; 
    }
};