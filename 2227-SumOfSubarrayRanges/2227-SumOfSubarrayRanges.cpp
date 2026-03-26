// Last updated: 3/26/2026, 1:25:31 PM
class Solution {
public:
    vector<int> findNSE(vector<int> & arr){
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;
        for(int i =n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] >= arr[i])st.pop();
            
            nse[i] = st.empty()?n:st.top();

            st.push(i);
        }
        return nse;
    }

    vector<int> findPSE(vector<int> & arr){
        int n = arr.size();
        vector<int> pse(n);
        stack<int> st;
        for(int i =0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i])st.pop();
            
            pse[i] = st.empty()?-1:st.top();
            st.push(i);
        }
        return pse;
    }

    vector<int> findNGE(vector<int> & arr){
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        for(int i =n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] <= arr[i])st.pop();
            nge[i] = st.empty()?n:st.top();
            st.push(i);
        }
        return nge;
    }
        vector<int> findPGE(vector<int> & arr){
        int n = arr.size();
        vector<int> pge(n);
        stack<int> st;
        for(int i =0;i<n;i++){
            while(!st.empty() && arr[st.top()] <arr[i])st.pop();
            pge[i] = st.empty()?-1:st.top();
            st.push(i);
        }
    return pge;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> nge = findNGE(nums);
        vector<int> pge = findPGE(nums);
        vector<int> nse = findNSE(nums);
        vector<int> pse = findPSE(nums);
        int n = nums.size();
        long long summin = 0;
        long long summax = 0;
        for(int i =0;i<n;i++){
            int lmin = i-pse[i];
            int rmin = nse[i] - i;
            summin += (1LL*lmin*rmin*nums[i]);
            int lmax = i-pge[i];
            int rmax = nge[i] - i;
            summax += (1LL*lmax*rmax*nums[i]); 
        }
        return summax - summin;
    }
};