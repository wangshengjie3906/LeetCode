int totalHammingDistance(int* nums, int numsSize){
    int temp0;
    int temp1;
    int sum = 0;
    for(int i = 31; i >= 0; i--)
    {
        temp0 = 0;
        temp1 = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(((nums[j] >> i) & 1) == 0)
            {
                temp0++;
            }
            else
            {
                temp1++;
            }
        }
        sum += temp0 * temp1;
    }

    return sum;
}