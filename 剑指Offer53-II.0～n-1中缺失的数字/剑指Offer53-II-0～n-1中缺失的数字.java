class Solution {
    public int missingNumber(int[] nums) {
        // 只有一个元素时
        if(nums.length == 1){
            if(nums[0] == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        // 首尾判断
        if(nums[0] != 0){
            return 0;
        }
        if(nums[nums.length - 1] != nums.length){
            return nums.length;
        }

        for(int i = 0;i < nums.length - 1;i++){
            if(nums[i + 1] != nums[i] + 1){
                return i + 1;
            }
        }
        // 如果找不到，返回-1
        return -1;
    }
}