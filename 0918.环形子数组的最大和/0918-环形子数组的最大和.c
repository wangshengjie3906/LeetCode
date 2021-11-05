int maxSubarraySumCircular(int* nums, int numsSize){
    int dp = nums[0],max = dp, sum = dp,min = 0;
    for(int i = 1; i < numsSize; i++){
        sum += nums[i];
        dp = nums[i] + fmax(dp, 0);
        max = fmax(dp, max);
    }
    dp = nums[0];
    for(int i = 1; i < numsSize -1; i++){
        dp = nums[i] + fmin(0,dp);
        min = fmin(dp,min);
    }
    return fmax(sum-min,max);
}