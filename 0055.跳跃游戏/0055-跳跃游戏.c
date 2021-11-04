bool canJump(int* nums, int numsSize){
    int right = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(i <= right)
        {
            right = right > (i + nums[i]) ? right : (i + nums[i]);
            if(right >= numsSize - 1)
            {
                return true;
            }
        }
    }
    return false;
}