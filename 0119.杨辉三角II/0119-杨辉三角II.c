/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize){
    //���費�������쳣���

    *returnSize = rowIndex + 1;//����ʡ������������Ҫ�жϷ���ָ���Լ�����

    if(rowIndex == 0)
    {
        int *temp = (int *)malloc(sizeof(int));
        temp[0] = 1;
        return temp;
    }

    int **array =(int**)malloc(sizeof(int *) * (rowIndex + 1));
    for(int i = 0; i <= rowIndex; i++)
    {
        array[i] = (int *)malloc(sizeof(int) * (i + 1));

        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
        }
    }

    return array[rowIndex];
}