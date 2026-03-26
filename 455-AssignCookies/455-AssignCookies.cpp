// Last updated: 3/26/2026, 1:26:35 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i = 0;
    for(int cookie:s){
        if(i <g.size() && g[i]<=cookie )i++;
    }   
    return i;
    }
};