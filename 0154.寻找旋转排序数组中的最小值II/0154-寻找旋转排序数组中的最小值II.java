class Solution {
    public int findMin(int[] nums) {
        int left = 0;
        int right = nums.length - 1;
        int mid;

        while(left < right)
        {
            mid = left + (right - left) / 2;
            if(nums[mid] < nums[right])
            {
                right = mid;
            }
            else if(nums[mid] == nums[right])
            {
                right--;
            }
            else
            {
                left = mid + 1;
            }
        }

        return nums[left];
    }
}