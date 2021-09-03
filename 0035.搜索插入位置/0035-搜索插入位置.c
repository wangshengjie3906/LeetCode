int searchInsert(int* nums, int numsSize, int target){
    if(nums == NULL || numsSize == 0)
    {
        return 0;
    }

    int left = 0;
    int right = numsSize - 1;
    int flag = (left + right) / 2;;
    
    while(left < right)
    {
        if(nums[flag] == target)
        {
            return flag;
        }

        if(nums[flag] < target)
        {
            left = flag + 1;
        }

        if(nums[flag] > target)
        {
            right = flag - 1;
        }

        flag = (left + right) / 2;
    }

    return (nums[flag] < target ? flag + 1 : flag);
}