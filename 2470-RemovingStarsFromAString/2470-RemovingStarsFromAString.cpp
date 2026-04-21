// Last updated: 4/21/2026, 2:51:01 PM
class Solution {
public:
    string removeStars(string s) {
        string str = "";

        for(char c:s){
            if(c!='*'){
            str.push_back(c);
            }
            else{
                str.pop_back();
            }
        }
        return str;
    }
};