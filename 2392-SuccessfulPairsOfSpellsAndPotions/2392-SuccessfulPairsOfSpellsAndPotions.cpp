// Last updated: 3/26/2026, 1:25:26 PM
class Solution {
public:
    
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n = potions.size();
        vector<int> ans;
        
        for(auto spell:spells){
            int l = 0;
            int r = n-1;
            while(l<=r){
                int mid = (r+l)/2;
                long num = (long) potions[mid]*(long)spell;
                if(num >= (long) success){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }
            ans.push_back(n-l);
        }

        return ans;
    }
};