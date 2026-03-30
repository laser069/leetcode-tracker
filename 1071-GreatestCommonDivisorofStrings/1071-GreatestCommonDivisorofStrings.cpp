// Last updated: 3/30/2026, 2:58:12 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int n = candies.size();
5        int maxCandy = candies[0];
6        for(int i = 0;i<n;i++){
7            maxCandy = max(candies[i],maxCandy);
8        }
9        vector<bool> ans;
10        for(int i = 0;i<n;i++){
11            ans.push_back(candies[i]+extraCandies>=maxCandy);
12        }
13        return ans;
14    }
15};