// Last updated: 4/21/2026, 2:51:37 PM
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        vector<int> arr1;
        vector<int> arr2;
        for(int i:s1){
        if(s2.count(i) == 0){
            arr1.push_back(i);
        }
        }
        for(int j:s2){
            if(s1.count(j) == 0){
                arr2.push_back(j);
            }
        }
        vector<vector<int>> ans;
        ans.push_back(arr1);
        ans.push_back(arr2);
        return ans; 

    }
};