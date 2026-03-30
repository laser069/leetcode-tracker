// Last updated: 3/30/2026, 5:11:53 PM
1class Solution {
2public:
3    bool increasingTriplet(vector<int>& nums) {
4        int smallest = INT_MAX;
5        int mid = INT_MAX;
6
7        for(int num:nums){
8            if(num>mid){
9                return true;
10            }
11            else if(num<=smallest){
12                smallest = num;
13            }
14            else {
15                mid = num;
16            }
17        }
18        return false;
19    }
20};