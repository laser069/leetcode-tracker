// Last updated: 3/26/2026, 1:25:50 PM
class Solution {
    public List<String> buildArray(int[] target, int n) {
        List<String> ans = new ArrayList<>();
        int curr = 1;
        for(int t : target){
            while(curr<t){
                ans.add("Push");
                ans.add("Pop");
                curr++;
            }
            ans.add("Push");
            curr++;
        }
        
        
        return ans;
    }
}