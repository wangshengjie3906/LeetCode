void rotate(int* nums, int numsSize, int k){
    int left = 0;
    int right = left + k;
    int temp[numsSize]; 
    for(left = 0; left < numsSize; left++)
    {
        temp[right % numsSize] = nums[left];
        right++;
    }
    for(int i = 0; i <numsSize; i++)
    {
        nums[i] = temp[i];
    }
    return;
}