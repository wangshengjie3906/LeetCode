int thirdMax(int* nums, int numsSize){

    int temp = 0;
    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[j] > nums[i])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    int flag = 1;
    for(int i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] > nums[i + 1])
        {
            flag++;
        }
        if(flag == 3)
        {
            return nums[i + 1];
        }
    }
    //flag < 3
    return nums[0];
}