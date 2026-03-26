// Last updated: 3/26/2026, 1:28:03 PM
class Solution {
public:
void dfs(int i,string word,vector<string> &res,vector<string> &builder,string digits){
    if(i == digits.length()){
        res.push_back(word);
        return;
    }
    string sui = builder[digits[i]-'0'];
    for(auto c:sui){
        dfs(i+1,word+c,res,builder,digits);

    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string word;
        if(digits.length() == 0){
            return  res;
        }
        vector<string> builder = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        dfs(0,word,res,builder,digits);
        
        return res;


    }
};