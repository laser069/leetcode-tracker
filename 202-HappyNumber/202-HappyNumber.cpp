// Last updated: 3/26/2026, 1:26:54 PM
class Solution {
public:
    long long sumOfSq(int n){
        long long sum = 0;
        
        while(n>0){
            long long digi = n%10;
            sum+=digi*digi;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = sumOfSq(n);
        while(fast!=1 && slow!=fast){
            slow = sumOfSq(slow);
            fast = sumOfSq(sumOfSq(fast));
        }
        return fast==1;
    }
};