/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findClosestElements(int* arr, int arrSize, int k, int x, int* returnSize){
    // 大窗口二分法缩小为小窗口，最终得到有 k 个元素的窗口
    int left = 0;
    int right = arrSize - k;
    int mid = 0;
    *returnSize = k;

    while(left < right)
    {
        mid = left + (right - left) / 2;
        if((x - arr[mid]) > (arr[mid + k] - x))
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    int *res = (int*)malloc(sizeof(int) * k);
    for(int i = 0; i < k; i++)
    {
        res[i] = arr[i + left];
    }

    return res;
}