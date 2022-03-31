/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    // 双指针法
    
    if (numsSize == 0)
    {
        return nums;
    }
    
    *returnSize = numsSize;

    // 临时变量，非 malloc 创建，无法直接返回
    int res[numsSize];

    // 判断条件容易缺少相等时的情况
    for (int left = 0, right = numsSize - 1, temp = numsSize - 1; left <= right;)
    {
        // 非递减，先平方，存在负数情况
        if (nums[left] * nums[left] > nums[right] * nums[right])
        {
            res[temp] = nums[left] * nums[left];
            left++;
        }
        else
        {
            res[temp] = nums[right] * nums[right];
            right--;
        }

        temp--;
    }

    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = res[i];
    }

    return nums;
}