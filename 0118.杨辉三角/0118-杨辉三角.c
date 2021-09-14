/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    
    //˫��ָ�룬��ά����
    int **result = (int**)malloc(sizeof(int*) * numRows);
    
    //�����ε�����
    *returnSize = numRows;
    
    //ÿһ�еĳ��ȣ�ָ��ָ������
    *returnColumnSizes = (int*)malloc(sizeof(int) * numRows);

    for(int i = 0; i < numRows; i++)//����ѭ��
    {
        result[i]  = (int*)malloc(sizeof(int) * (i + 1));
        
        for(int j = 0; j <= i; j++)//ÿһ�еĸ���ѭ��
        {
            if(j == 0 || j == i)//ÿһ�У���һ�������һ��Ϊ 1
            {
                result[i][j] = 1;
            }
            else
            {
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
            }
        }

        //ע���������ʽ������ָ�룬��һ���ǵ���ָ�룬�ڶ������ָ�������ָ��
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