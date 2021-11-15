int maxProduct(int* nums, int numsSize){
    /** 方法 1：
    //1.负数为偶数个，则整个数组的各个值相乘为最大值；
    //2.负数为奇数个，则从左边开始，乘到最后一个负数停止有一个“最大值”
    //从右边也有一个“最大值”，比较，得出最大值
    
    if (numsSize == 0)
    {
        return 0;
    }

    int res = nums[0];
    int temp = 1;

    for (int i = 0; i < numsSize; i++)
    {
        temp *= nums[i];
        res = fmax(temp, res);
        if(nums[i] == 0)
        {
            temp = 1;
        }
    }

    temp = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        temp *= nums[i];
        res = fmax(temp, res);
        if(nums[i] == 0)
        {
            temp = 1;
        }
    }

    return res;
    */

    /* 方法 2：动态规划，滚动数组优化空间复杂度*/

    if (numsSize == 0)
    {
        return 0;
    }

    int max = nums[0];
    int min = nums[0];
    int res = nums[0];
    int temp_max;
    int temp_min;

    for (int i = 1; i < numsSize; i++)
    {
        temp_max = max;
        temp_min = min;
        max = fmax(temp_max * nums[i], fmax(nums[i], temp_min * nums[i]));
        min = fmin(temp_max * nums[i], fmin(nums[i], temp_min * nums[i]));
        res = fmax(max, res);
    }
    
    return res;
}