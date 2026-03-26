// Last updated: 3/26/2026, 1:25:44 PM
class Solution {
    public int countStudents(int[] students, int[] sandwiches) {
        int n = students.length;
        int res = n;
        int m = sandwiches.length;
        int[] nums = new int[2];
        for(int i =0;i<n;i++){
            nums[students[i]]++;
        }
        for(int sw:sandwiches){
            if(nums[sw]>0){
                res--;
                nums[sw]--;
            }else{
                break;
            }
        }

        return res;

    }
}