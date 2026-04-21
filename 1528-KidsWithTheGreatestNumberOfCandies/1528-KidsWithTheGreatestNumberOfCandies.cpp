// Last updated: 4/21/2026, 2:51:33 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC = candies[0];
        vector<bool> ans;
        for(int c:candies)maxC = max(c,maxC);

        for(int c:candies){
            if(c+extraCandies >=maxC){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};