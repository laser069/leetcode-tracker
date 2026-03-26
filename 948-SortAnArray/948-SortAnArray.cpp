// Last updated: 3/26/2026, 1:26:08 PM
class Solution {
public:
    vector<int> subarray(vector<int>& array,int s,int l){
        vector<int> subarray;
        int n = array.size();
        for(int i = s;i<=l;i++){
            subarray.push_back(array[i]);
        }
        return subarray;
    }
    vector<int> mergeSort(vector<int> left,vector<int> right){
        int i = 0;
        int j = 0;
        vector<int> result;
        while(i<left.size() && j<right.size()){
            if(left[i]<=right[j]){
            result.push_back(left[i++]);
            }
            
            else{
                result.push_back(right[j++]);
            }
        }

        while(i<left.size())result.push_back(left[i++]);
        while(j<right.size())result.push_back(right[j++]);
        return result;
    }
    vector<int> merge(vector<int> arr){
        if(arr.size()==1)return arr;
        int mid = arr.size()/2;
        vector<int> leftarr = subarray(arr,0,mid-1);
        vector<int> rightarr = subarray(arr,mid,arr.size()-1);

        vector<int> sortedLeft = merge(leftarr);
        vector<int> sortedRight = merge(rightarr);

        return mergeSort(sortedLeft,sortedRight);

    }

    vector<int> sortArray(vector<int>& nums) {
        return merge(nums);
        
    }
};