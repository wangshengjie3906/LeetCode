/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    /* // ¶ÑÒç³ö £¿£¿
    int left = 0;
    int rigth = numbersSize;
    while((numbers[left] + numbers[rigth]) != target)
    {
        if((numbers[left] + numbers[rigth]) < target)
        {
            left++;
        }
        else
        {
            rigth--;
        }
    }

    *returnSize = 2;
    int *res = (int*)malloc(sizeof(int) * 2);
    res[0] = left + 1;
    res[1] = rigth + 1;
    return res;
    */

    int* ret = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    int low = 0;
    int high = numbersSize - 1;
    
    while (low < high)
    {
        int sum = numbers[low] + numbers[high];
        if (sum == target)
        {
            ret[0] = low + 1, ret[1] = high + 1;
            return ret;
        }
        else if(sum < target)
        {
            ++low;
        }
        else
        {
            --high;
        }
    }

    ret[0] = -1, ret[1] = -1;
    return ret;
}