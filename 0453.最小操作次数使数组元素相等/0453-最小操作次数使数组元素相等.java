class Solution {
    public int minMoves(int[] nums) {
        int min = nums[0];
        for(int i = 1; i < nums.length; i++)
        {
            if(min > nums[i])
            {
                min = nums[i];
            }
        }

        int sum = 0;
        for(int i = 0; i < nums.length; i++)
        {
            sum += nums[i] - min;
        }

        return sum;
    }
}