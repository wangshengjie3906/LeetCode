class Solution {
    public int search(int[] nums, int target) {
        int flag = 0;
        for(int item: nums){
            if(item == target){
                flag++;
            }
        }
        return flag;
    }
}