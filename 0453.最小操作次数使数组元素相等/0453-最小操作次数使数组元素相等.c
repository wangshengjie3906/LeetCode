int minMoves(int* nums, int numsSize){
    int min = nums[0];
    for(int i = 1; i < numsSize; i++)
    {
        if(min > nums[i])
        {
            min = nums[i];
        }
    }

    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i] - min;
    }

    return sum;
}