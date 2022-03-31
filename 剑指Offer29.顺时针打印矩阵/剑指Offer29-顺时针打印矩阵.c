/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    if(matrix == NULL || matrixSize == 0 || *matrixColSize == 0)
    {
        *returnSize = 0;
        return NULL;
    }
    
    int left = 0;
    int right = *matrixColSize - 1;
    int top = 0;
    int botton = matrixSize - 1;

    *returnSize = matrixSize * (*matrixColSize);
    int *res = (int*)malloc(sizeof(int) * (*returnSize));
    int n = 0;

    while(true)
    {
        // from left to right
        for(int i = left; i <= right; i++)
        {
            res[n++] = matrix[top][i];
        }
        if(++top > botton)
        {
            break;
        }

        // from top to botton
        for(int i = top; i <= botton; i++)
        {
            res[n++] = matrix[i][right];
        }
        if(--right < left)
        {
            break;
        }

        // from right to left
        for(int i = right; i >= left; i--)
        {
            res[n++] = matrix[botton][i];
        }
        if(--botton < top)
        {
            break;
        }

        // from botton to top
        for(int i = botton; i >= top; i--)
        {
            res[n++] = matrix[i][left];
        }
        if(++left > right)
        {
            break;
        }
    }

    return res;
}