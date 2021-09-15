int findPeakElement(int* nums, int numsSize){
    if(numsSize < 2)
    {
        return 0;
    }

    int left = 0;
    int right = numsSize - 1;
    int mid = 0;

    while(left < right)
    {
        mid = (left + right) / 2;

        if(nums[mid] < nums[mid + 1])
        {
            left = mid + 1;
        }
        else
        {
            right = mid; //注意这里没有减 1
        }
    }

    return left;
}