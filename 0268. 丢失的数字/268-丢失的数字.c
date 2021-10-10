int missingNumber(int* nums, int numsSize){
    //数学方法求解

    int sum = 0;
    int temp = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        temp += i;
    }

    temp += numsSize;

    if((temp - sum) == 0)
    {
        return 0;
    }
    else
    {
        return temp - sum;
    }
}