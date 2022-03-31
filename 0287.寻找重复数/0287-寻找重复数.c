int findDuplicate(int* nums, int numsSize){
    /* 一开始想到先排序，再二分查找，但是要求是不能修改数组
    *  这里只要做出来，放弃了二分法
    */
    
    int temp[numsSize];
    /*
    for(int i = 0; i < numsSize; i++)
    {
        temp[i] = 0;
    }
    */
    memset(&temp, 0, sizeof(temp));

    for(int i = 0; i < numsSize; i++)
    {
        if(temp[nums[i] - 1] == 0)
        {
            temp[nums[i] - 1] = 1;
        }
        else
        {
            return nums[i];
        }
    }

    return -1;;
}