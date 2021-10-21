/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int flag = 0;
    int i = digitsSize - 1;
    while((++digits[i]) == 10)
    {
        digits[i] = 0;
        if(i == 0)
        {
            flag = 1;
            break;
        }
        //digits[i - 1]++;
        i--;
    }

    if(flag == 1)
    {
        digitsSize++;
        int *newDigits = malloc(sizeof(int) * digitsSize);
        newDigits[0] = 1;
        for(int i = 1; i < digitsSize; i++)
        {
            newDigits[i] = digits[i - 1];
        }
        digits = newDigits;
    }

    *returnSize = digitsSize;
    return digits;
}