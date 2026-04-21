// Last updated: 4/21/2026, 2:51:19 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        gain.insert(gain.begin(),0);
        int maxGain = 0;
        int n = gain.size();
        for(int i =1;i<n;i++){
            gain[i] = gain[i-1]+gain[i];
            maxGain = max(gain[i],maxGain);
        }
        return maxGain;
    }
};