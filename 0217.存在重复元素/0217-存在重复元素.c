int cmp(const void* _a, const void* _b) {
    int a = *(int*)_a, b = *(int*)_b;
    return a - b;
}

bool containsDuplicate(int* nums, int numsSize){
    /*
    if(numsSize == 0)
    {
        return false;
    }

    int temp = 0;
    int flag = 0;
    for(int i = 0; i < numsSize - 1; i++)
    {
        flag = 0;
        for(int j = 0; j < numsSize - i -1; j++)
        {
            if(nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag != 1)
        {
            break;
        }
    }

    for(int i = 0; i < numsSize - 1; i++)
    {
        if(nums[i] == nums[i + 1])
        {
            return true;
        }
    }

    return false;
    */

    
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
