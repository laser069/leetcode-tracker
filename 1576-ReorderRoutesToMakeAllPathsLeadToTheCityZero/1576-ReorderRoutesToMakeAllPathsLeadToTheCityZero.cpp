// Last updated: 4/21/2026, 2:51:27 PM
class Solution {
public:
    int dfs(vector<vector<pair<int,int>>>& adj,vector<bool> &vis,int node){
        vis[node] = true;
        int changes = 0;
        for(auto [nei,cost]:adj[node]){
            if(!vis[nei]){
            changes+=cost;
            changes+=dfs(adj,vis,nei);
            }
        }
        return changes;

    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto vec:connections){
            int u = vec[0];
            int v = vec[1];
            adj[u].push_back({v,1});
            // adj[vec[0]].push_back(1);
            adj[v].push_back({u,0});
            // adj[vec[1]].push_back(0);
        }
        vector<bool> vis(n,false);
        return dfs(adj,vis,0);
    }
};