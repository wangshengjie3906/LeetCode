class Solution {
    public int missingNumber(int[] nums) {
        // ֻ��һ��Ԫ��ʱ
        if(nums.length == 1){
            if(nums[0] == 0){
                return 1;
            }
            else{
                return 0;
            }
        }
        // ��β�ж�
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
        // ����Ҳ���������-1
        return -1;
    }
}