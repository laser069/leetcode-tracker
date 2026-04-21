// Last updated: 4/21/2026, 2:50:53 PM
class Solution {
public:
    int tupleDistance(vector<int>& nums,vector<int>& ind){
        int i = ind[0];
        int j = ind[1];
        int k = ind[2];
        return abs(i-j)+abs(j-k)+abs(k-i);
    }

    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        int minDist = INT_MAX;
        for(int i = 0;i<n;i++){
            vector<int> ind;

            for(int j =i+1;j<n;j++){
                if(nums[i] == nums[j]){

                ind.push_back(j);

                 if (ind.size() == 2){
                    vector<int> temp = {i,ind[0],ind[1]};
                        minDist = min(minDist,tupleDistance(nums,temp));
                        ind.erase(ind.begin());
                    }
                }
            }
        }
        return minDist==INT_MAX?-1:minDist;
    }
};