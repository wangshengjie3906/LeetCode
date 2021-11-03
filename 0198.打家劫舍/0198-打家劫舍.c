int rob(int* nums, int numsSize){
    if(numsSize == 1)
    {
        return nums[0];
    }
    if(numsSize == 2)
    {
        if(nums[0] > nums[1])
        {
            return nums[0];
        }
        else
        {
            return nums[1];
        }
    }

    /*
    int sum[numsSize];
    sum[0] = nums[0];
    sum[1] = nums[0] > nums[1] ? nums[0] : nums[1];
    for(int i = 2; i < numsSize; i++)
    {
        sum[i] = (nums[i] + sum[i - 2]) > (sum[i - 1]) ? (nums[i] + sum[i - 2]) : (sum[i - 1]);
    }
    return sum[numsSize - 1];
    */

    /* 滚动数组，优化空间复杂度 */
    int a = nums[0];
    int b = nums[0] > nums[1] ? nums[0] : nums[1];
    int c;
    for(int i = 2; i < numsSize; i++)
    {
        //注意顺序
        c = b;
        b = (a + nums[i]) > b ? (a + nums[i]) : b;
        a = c;
    }
    return b;
}