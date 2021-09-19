/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    int *res = (int *)malloc(sizeof(int) * (n + 1));
    res[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        res[i] = res[i & (i - 1)] + 1;
    }

    *returnSize = n + 1;
    return res;
}