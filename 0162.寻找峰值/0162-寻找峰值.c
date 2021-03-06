int findPeakElement(int* nums, int numsSize){
    int left = 0;
    int right = numsSize - 1;
    int mid;

    while(left + 1 < right)
    {
        mid = left + (right - left) / 2;
        if(nums[mid] > nums[mid + 1])
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }

    return nums[left]>nums[right] ? left : right;;
}