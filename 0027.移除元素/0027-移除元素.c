int removeElement(int* nums, int numsSize, int val){
    //判断输入是否异常
    if(nums == NULL || numsSize == 0)
    {
        return 0;
    }

    int flag = 0;//标记
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)//记录相同的元素个数
        {
            flag++;
            continue;
        }

        if(flag == 0)//遇到第一个相同元素之前不用移动(避免给自己赋值)
        {
            continue;
        }

        //其他元素向前移动对应距离
        nums[i - flag] = nums[i];
    }

    return (numsSize - flag);//总长度减去相同的个数
}