// Last updated: 3/26/2026, 1:26:24 PM
class Solution {
    public int[] exclusiveTime(int n, List<String> logs) {
        int[] st = new int[n];
        for(int i =0;i<n;i++){
            st[i] = 0;
        }

        Stack<Integer> callst = new Stack<>();
        int prevStart = 0;
        for(String log : logs){
            String[] vals = log.split(":");
            
            int funcId = Integer.parseInt(vals[0]);
            int timestamp = Integer.parseInt(vals[2]);
            if(vals[1].equals("start")){
                if(callst.size()>0){
                    st[callst.peek()] += timestamp - prevStart;
                }
                
                callst.push(funcId);
                prevStart = timestamp;
            }else{
                st[callst.pop()] += timestamp-prevStart+1;
                prevStart = timestamp+1;
            }

        }
        return st;
    }
}