/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize){
    if(nums == NULL || numsSize == 0)
    {
        return NULL;
    }
    if(numsSize == 2)
    {
        return nums;
    }

    *returnSize = 2;

    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum ^= nums[i]; // �����ĺ�
    }

    // �ҵ����������͵Ĳ���ͬ��һλ������ 1 �ģ���ԭ����ֳ�������򼴿�
    int flag = 0;
    while((sum & 1) == 0)
    {
        sum >>= 1;
        flag++; // ���ʹ��flag�ӿ�ʼ���ƣ����ܴ�����������
    }

    int *res = (int *)malloc(sizeof(int) * 2);
    res[0] = 0;
    res[1] = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(((nums[i] >> flag) & 1) == 0)
        {
            res[0] ^= nums[i];
        }
        else
        {
            res[1] ^= nums[i];
        }
    }

    return res;
}