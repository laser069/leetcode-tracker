// Last updated: 3/26/2026, 1:28:08 PM
class Solution {
public:
    bool isPalindrome(int x) {
        long int rep=0;
        long int temp = x;
        if(x<0){
            return false;
        }
        long int i;
        while(x!=0){
            i = x%10;
            rep = rep*10+i;
            x/=10;
        }
    if(rep==temp){
        return true;
    }return false;
    }
};