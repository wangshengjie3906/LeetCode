class Solution {
    public int searchInsert(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        int flag = (left + right) / 2;
        
        while(left < right)
        {
            if(nums[flag] == target)
            {
                return flag;
            }
            else if(nums[flag] < target)
            {
                left = flag + 1;
            }
            else
            {
                right = flag - 1;
            }

            flag = left + (right - left) / 2;
        }

        return (nums[flag] < target ? flag + 1 : flag);
    }
}