// Last updated: 3/26/2026, 1:25:33 PM
class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int n = tickets.length;
        int totalTime = 0;
        for(int i =0;i<n;i++){
            if(i<=k){
                totalTime+=Math.min(tickets[i],tickets[k]);
            }else{
                totalTime+=Math.min(tickets[i],tickets[k]-1);
            }
        } 
        return totalTime;
    }
}