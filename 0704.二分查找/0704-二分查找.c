int search(int* nums, int numsSize, int target){
    if (NULL == nums)
    {
        return -1;
    }

    int left = 0;
    int right = numsSize - 1;
    int middle = 0;

    while (left <= right)
    {
        middle = (left + right) / 2;
        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = right - 1;
        }
    }

    return -1;
}