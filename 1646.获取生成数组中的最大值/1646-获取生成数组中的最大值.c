int getMaximumGenerated(int n){
    if(n < 2)
    {
        return n;
    }

    int *nums = malloc(sizeof(int) * (n + 1));
    nums[0] = 0;
    nums[1] = 1;
    int max = 0;
    for(int i = 2; i <= n; i++)
    {
        if((i & 1) == 0)
        {
            nums[i] = nums[i / 2];
        }
        else
        {
            nums[i] = nums[i / 2] + nums[(i / 2) + 1];
        }

        if(nums[i] > max)
        {
            max  = nums[i];
        }
    }

    return max;
}