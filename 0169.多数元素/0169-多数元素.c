int majorityElement(int* nums, int numsSize){
    /*
    //计数统计法
    //出现最多的数次数大于 n/2 ,前半部分一定出现过
    int count;
    for(int i = 0; i < ((numsSize + 1) / 2); i++)
    {
        count = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        if(count >= ((numsSize + 1) / 2))
        {
            return nums[i];
        }
    }

    return nums[0];//循环里未找到时
    */

    /*投票算法*/
    int candidate = -1;
    int count = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == candidate)
        {
            ++count;
        }
        else if(--count < 0)
        {
            candidate = nums[i];
            count = 1;
        }
    }
    
    return candidate;
}