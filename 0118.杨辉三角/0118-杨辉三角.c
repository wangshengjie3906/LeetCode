/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    
    //双层指针，二维数组
    int **result = (int**)malloc(sizeof(int*) * numRows);
    
    //三角形的行数
    *returnSize = numRows;
    
    //每一行的长度，指向指针数组
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);

    for(int i = 0; i < numRows; i++)//行数循环
    {
        result[i]  = (int*)malloc(sizeof(int) * (i + 1));
        
        for(int j = 0; j <= i; j++)//每一行的个数循环
        {
            if(j == 0 || j == i)//每一行，第一个和最后一个为 1
            {
                result[i][j] = 1;
            }
            else
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }

        //注意这里的形式，二层指针，第一层是单个指针，第二层才是指向数组的指针
        (*returnColumnSizes)[i] = i + 1;
    }

    return result;
    

    /*
    int** ret = malloc(sizeof(int*) * numRows);
    *returnSize = numRows;
    *returnColumnSizes = malloc(sizeof(int) * numRows);
    for (int i = 0; i < numRows; ++i) {
        ret[i] = malloc(sizeof(int) * (i + 1));
        (*returnColumnSizes)[i] = i + 1;
        ret[i][0] = ret[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
        }
    }
    return ret;
    */
}