// Last updated: 3/26/2026, 1:26:31 PM
class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        vector<int> nge(n,-1);
        map<int,int> ind;

        for(int i=n-1;i>=0;i--){
            while(!st.empty()&& nums2[i] >= st.top()){
                st.pop();
            }
            if(!st.empty())nge[i] = st.top();

        st.push(nums2[i]);
        }
    for(int i =0;i<nums2.size();i++){
        ind[nums2[i]] = nge[i];
    }
    vector<int> ans;
    for(int num:nums1){
        ans.push_back(ind.count(num)?ind[num]:-1);
    }
    return ans;
        
    }
};