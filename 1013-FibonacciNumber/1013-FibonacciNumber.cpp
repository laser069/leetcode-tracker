// Last updated: 3/26/2026, 1:26:05 PM
class Solution {
public:
    int fib(int n) {
        if(n==0 || n == 1)return n;
        
        return (fib(n-1) + fib(n-2));
    }
};