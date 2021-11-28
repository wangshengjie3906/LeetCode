class Solution {
    public int search(int[] nums, int target) {
        if (null == nums)
        {
            return -1;
        }

        int left = 0;
        int right = nums.length - 1;
        int middle = 0;

        while (left <= right)
        {
            middle = (left + right) / 2;
            if (nums[middle] == target)
            {
                return middle;
            }
            else if (nums[middle] < target)
            {
                left = middle + 1;
            }
            else
            {
                right = right - 1;
            }
        }

        return -1;
    }
}