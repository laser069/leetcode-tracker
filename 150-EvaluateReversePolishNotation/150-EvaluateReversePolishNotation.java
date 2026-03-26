// Last updated: 3/26/2026, 1:27:02 PM
class Solution {

    static boolean isOp(String c){
        return c.equals("+")||c.equals("/")||c.equals("*")||c.equals("-");
    }

    public int evalRPN(String[] tokens) {
        int n = tokens.length;
        Stack<Integer> ints = new Stack<>();

        for(String s: tokens){
            if(!isOp(s)){
                ints.push(Integer.parseInt(s));
            }
            else{
                int num2 = ints.pop();
                int num1 = ints.pop(); 
                switch(s){
                    case "+":
                    ints.push(num1+num2);
                    break;
                    case "-":
                    ints.push(num1-num2);
                    break;
                    case "/":
                    ints.push(num1/num2);
                    break;
                    case "*":
                    ints.push(num2*num1);
                    break;
                }
            }

        }
        
        return ints.firstElement();
        
    }
}