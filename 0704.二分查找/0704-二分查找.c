

int search(int* nums, int numsSize, int target){
    if(nums == NULL || numsSize == 0)
    {
        return -1;
    }
    
    int left = 0;
    int right = numsSize - 1;
    int rec = 0;
    
    while(left <= right)
    {
        rec = (right + left) / 2;
        
        if(nums[rec] == target)
        {
            return rec;
        }
        
        if(nums[rec] > target)
        {
            right = rec - 1;
        }
        else
        {
            left = rec + 1;
        }
    }
    
    return -1;
}