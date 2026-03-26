// Last updated: 3/26/2026, 1:26:15 PM
class Solution {
public:
    int maxr(vector<int>& piles){
        int s=piles[0];
        for(int pile:piles){
            s = max(s,pile);
        }
        return s;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = maxr(piles);
        while(l<=r){
            int mid = l+(r-l)/2;
            long mxhr = 0;
            for(int pile:piles){
                mxhr += (pile+mid-1)/mid;
            }
            if(mxhr<=h){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
    return l;        
    }
};