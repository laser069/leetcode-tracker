// Last updated: 4/21/2026, 2:51:40 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> frequencyMap;
        for(int i = 0;i<n;i++){
            frequencyMap[arr[i]]++;
        }
        unordered_set<int> seenFrequencies;
        for (auto& [key, frequency] : frequencyMap) {
            if (seenFrequencies.count(frequency)) {
                return false;
            }
            seenFrequencies.insert(frequency);
        }

        
        return true;

    }
};