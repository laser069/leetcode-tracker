// Last updated: 3/26/2026, 1:25:29 PM
class Solution {
public:
    int countOperations(int num1, int num2) {
        int op = 0;
        while(num1!=0 && num2!=0){
            if(num1>=num2){
                num1-=num2;
            }else{
                num2-=num1;
            }
            op++;
        }

        return op;
        
    }
};