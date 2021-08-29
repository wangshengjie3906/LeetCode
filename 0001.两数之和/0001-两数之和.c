/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
 ±©Á¦½â·¨
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *returnArray = (int*)malloc(sizeof(int) * 2);
    *returnSize = 0;
    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if((nums[i] + nums[j])==target)
            {
                *returnSize = 2;
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
        }
    }
    return returnSize;
}