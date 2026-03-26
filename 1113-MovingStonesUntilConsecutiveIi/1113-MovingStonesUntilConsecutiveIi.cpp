// Last updated: 3/26/2026, 1:26:03 PM
class Solution {
public:
    vector<int> numMovesStonesII(vector<int>& stones) {
        int n = stones.size();
        sort(stones.begin(),stones.end());
        int maxmove = stones[n-1]-stones[0]+1-n-min(stones[1]-stones[0]-1,stones[n-1]-stones[n-2]-1);
        
        int minmove = n;
        int l = 0;
        for(int r = 0;r<n;r++){
            while(stones[r]-stones[l]+1>n)l++;
            if(r-l+1 == n-1 && stones[r]-stones[l]+1 == n-1){
             minmove = min(minmove,2)  ; 
            }else{
             minmove = min(minmove,n-(r-l+1))  ; 
                
            }
            
        }
        
        return {minmove,maxmove};

    }
};