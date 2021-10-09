int maxSubArray(int* nums, int numsSize){
    if(numsSize == 1)
    {
        return nums[0];
    }

    int sum = nums[0];
    int temp = 0;

    for(int i = 0; i < numsSize; i++)
    {
        temp = (temp + nums[i]) > nums[i] ? (temp + nums[i]) : nums[i];
        sum = temp > sum ? temp : sum;
    }

    return sum;
}