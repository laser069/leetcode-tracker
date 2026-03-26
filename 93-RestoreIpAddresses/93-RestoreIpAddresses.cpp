// Last updated: 3/26/2026, 1:27:23 PM
class Solution {
public:
    void resip(int i,string s,vector<string> &currip,vector<string> &res){
        if(currip.size() == 4 && s.length() == i){
            res.push_back(currip[0]+"."+currip[1]+"."+currip[2]+"."+currip[3]);
            return;
        }

        for(int l = 1;l<=3;l++){
            if(i+l>s.length())break;
            if(l>1 && s[i] == '0')break;
            string num = s.substr(i,l);
            if(stoi(num) > 255)break;
            currip.push_back(num);
            resip(i+l,s,currip,res);
            currip.pop_back();
        }

    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        vector<string> ans;
        resip(0,s,ans,res);
        return res;        
    }
};