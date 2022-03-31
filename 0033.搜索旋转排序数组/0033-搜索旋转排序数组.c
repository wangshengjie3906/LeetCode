int search(int* nums, int numsSize, int target){
    if(nums == NULL || numsSize == 0)
    {
        return -1;
    }

    int left = 0;
    int right = numsSize - 1;
    int mid;

    while(left <= right)
    {
        mid = left + (right - left) /  2;

        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] >= nums[left]) // 左递增区间
        {
            if(target >= nums[left] && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            // 右递增区间
            if(target > nums[mid] && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return -1;
}