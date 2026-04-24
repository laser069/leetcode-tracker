// Last updated: 4/24/2026, 4:35:00 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int l = 0;
        int r = n-1;
        while(l<r){
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            r--;
            l++;
        }
    }

};