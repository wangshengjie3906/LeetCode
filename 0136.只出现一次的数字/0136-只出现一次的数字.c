int singleNumber(int* nums, int numsSize){
    if(nums == NULL || numsSize == 0)
    {
        return 0;
    }

    int res = nums[0];
    for(int i = 1; i < numsSize; i++)
    {
        res = res^nums[i];
    }

    return res;
}