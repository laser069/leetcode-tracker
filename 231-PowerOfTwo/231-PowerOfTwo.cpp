// Last updated: 3/26/2026, 1:26:50 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {


        if (n > 0 && (n & (n - 1)) == 0)return true;
        
        return false;
    }
};