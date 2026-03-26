// Last updated: 3/26/2026, 1:25:56 PM
class Solution {
public:
    void dfs(int i,int &ans,string temp,vector<string> &arr){
        if(i == arr.size()){

        if(unique(temp) && temp.length()>ans) ans = temp.length();
        return ;
        }
        dfs(i+1,ans,temp,arr);
        dfs(i+1,ans,temp+arr[i],arr);
    }
    bool unique(string str){
        int hash[26] = {0};
        for(char c : str){
            if(hash[c-'a'] == 1)return false;
            hash[c-'a']++;
        }
        return true;
    }
    int maxLength(vector<string>& arr) {
        int ans = 0;
        string temp;
        dfs(0,ans,temp,arr);
        return ans;
        
    }
};