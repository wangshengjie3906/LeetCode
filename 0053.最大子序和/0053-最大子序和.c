int maxSubArray(int* nums, int numsSize){
    /*暴力解法，运行超时*/
    /*
    if(numsSize == 1)
    {
        return nums[0];
    }

    int temp = 0;
    int sum = nums[0];

    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize - i; j++)
        {
            temp =0;
            for(int k = 0; k <= i; k++)
            {
                temp += nums[j + k];
            }

            if(temp > sum)
            {
                sum = temp;
            }
        }
    }

    return sum;
    */

    /*动态规划解法*/
    if(numsSize == 1)
    {
        return nums[0];
    }

    int sum = nums[0];
    int temp = 0;
    for(int i = 0; i < numsSize; i++)
    {
        temp = (temp + nums[i]) > nums[i] ? (temp + nums[i]) : nums[i];
        sum = temp > sum ? temp : sum;
    }

    return sum;
}