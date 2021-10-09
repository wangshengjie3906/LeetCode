class Solution {
    public int maxSubArray(int[] nums) {
        if(nums.length == 1)
        {
            return nums[0];
        }

        int sum = nums[0];
        int temp = 0;

        for(int i = 0; i < nums.length; i++)
        {
            temp = (temp + nums[i]) > nums[i] ? (temp + nums[i]) : nums[i];
            sum = temp > sum ? temp : sum;
        }

        return sum;
    }
}