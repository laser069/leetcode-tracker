// Last updated: 3/26/2026, 1:25:41 PM
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])return edges[0][0];
        return edges[0][1];
    }
};