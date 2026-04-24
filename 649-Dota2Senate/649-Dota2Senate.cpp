// Last updated: 4/24/2026, 4:34:38 PM
class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qR;
        queue<int> qD;
        
        int n = senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R')qR.push(i);
            else qD.push(i);
        }
        while(!qR.empty()&&!qD.empty()){
            int R = qR.front();qR.pop();
            int D = qD.front();qD.pop();
            if(R<D){
                qR.push(R+n);
            }else{
                qD.push(D+n);
            }
        }
        return !qR.empty()?"Radiant":"Dire";
    }
};