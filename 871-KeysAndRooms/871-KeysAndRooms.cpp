// Last updated: 4/21/2026, 2:52:01 PM
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,false); 
        queue<int> q;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int num = q.front();q.pop();
            for(int i :rooms[num]){
                if(!visited[i]){
                q.push(i);
                visited[i] = true;
                }
            }
            
        }
        for(bool b:visited){
            if(b==false){
                return false;
            }
        }
        return true;
    }
};