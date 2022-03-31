/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;

    int left = 0;
    int right = numbersSize - 1;
    int *res = malloc(sizeof(int) * 2);
    res[0] = 0;
    res[1] = 0;

    while(left < right)
    {
        if((numbers[left] + numbers[right]) == target)
        {
            res[0] = left + 1;
            res[1] = right + 1;
            break;
        }
        else if((numbers[left] + numbers[right]) < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return res;
}