class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int dp = nums[0],max = dp, sum = dp,min = 0;
        for(int i = 1; i < nums.length; i++){
            sum += nums[i];
            dp = nums[i] + Math.max(dp, 0);
            max = Math.max(dp, max);
        }
        dp = nums[0];
        for(int i = 1; i < nums.length -1; i++){
            dp = nums[i] + Math.min(0,dp);
            min = Math.min(dp,min);
        }
        return Math.max(sum-min,max);
    }
}