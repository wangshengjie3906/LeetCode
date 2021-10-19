/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;//返回的数组都是两个元素
    int *res = malloc(sizeof(int) * 2);
    res[0] = -1;
    res[1] = -1;
    if(numsSize == 0)//判断空数组
    {
        return res;
    }

    /**
    //二分查找，确定初始中间点
    int left = 0;
    int right = numsSize - 1;
    int middle = (left + right) / 2;
    int flag = 0;//存不存在对应值
    while(left <= right)
    {
        middle = (left + right) / 2;
        if(nums[middle] == target)
        {
            flag =1;
            break;
        }
        else if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else if(nums[middle] > target)
        {
            right = middle - 1;
        }
    }

    if(flag == 0)
    {
        return res;
    }

    int temp = 0;

    int middle_left = middle;//左边只关注最小位置，从中间往低处缩小范围
    while(left < middle_left)
    {
        temp = (left + middle_left) / 2;
        if(nums[temp] == target)
        {
            middle_left = temp - 1;
        }
        else if(nums[temp] < target)
        {
            left = temp + 1;
        }
    }
    res[0] = left;

    temp = 0;
    int middle_right = middle;
    while(middle_right < right)//右边只关注最大位置，从中间往高处缩小范围
    {
        temp = (middle_right + right) / 2;
        if(nums[temp] == target)
        {
            middle_right = temp + 1;
        }
        else if(nums[temp] > target)
        {
            right = temp - 1;
        }
    }
    res[1] = right;

    return res;

    **/

    //暴力解法
    int left = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == target)//第一个相等的位置
        {
            if(i == numsSize - 1)
            {
                res[1] = i;
            }
            if(left == 1)
            {
                continue;
            }
            left = 1;
            res[0] = i;
            continue;
        }

        //不等的时候，有序数组后面都不等
        if(left == 1)
        {
            res[1] = i - 1;
            break;
        }
    }

    return res;
}