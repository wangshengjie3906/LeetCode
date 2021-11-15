int maxProduct(int* nums, int numsSize){
    /** ���� 1��
    //1.����Ϊż����������������ĸ���ֵ���Ϊ���ֵ��
    //2.����Ϊ�������������߿�ʼ���˵����һ������ֹͣ��һ�������ֵ��
    //���ұ�Ҳ��һ�������ֵ�����Ƚϣ��ó����ֵ
    
    if (numsSize == 0)
    {
        return 0;
    }

    int res = nums[0];
    int temp = 1;

    for (int i = 0; i < numsSize; i++)
    {
        temp *= nums[i];
        res = fmax(temp, res);
        if(nums[i] == 0)
        {
            temp = 1;
        }
    }

    temp = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        temp *= nums[i];
        res = fmax(temp, res);
        if(nums[i] == 0)
        {
            temp = 1;
        }
    }

    return res;
    */

    /* ���� 2����̬�滮�����������Ż��ռ临�Ӷ�*/

    if (numsSize == 0)
    {
        return 0;
    }

    int max = nums[0];
    int min = nums[0];
    int res = nums[0];
    int temp_max;
    int temp_min;

    for (int i = 1; i < numsSize; i++)
    {
        temp_max = max;
        temp_min = min;
        max = fmax(temp_max * nums[i], fmax(nums[i], temp_min * nums[i]));
        min = fmin(temp_max * nums[i], fmin(nums[i], temp_min * nums[i]));
        res = fmax(max, res);
    }
    
    return res;
}