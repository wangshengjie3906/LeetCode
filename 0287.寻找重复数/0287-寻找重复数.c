int findDuplicate(int* nums, int numsSize){
    /* һ��ʼ�뵽�������ٶ��ֲ��ң�����Ҫ���ǲ����޸�����
    *  ����ֻҪ�������������˶��ַ�
    */
    
    int temp[numsSize];
    /*
    for(int i = 0; i < numsSize; i++)
    {
        temp[i] = 0;
    }
    */
    memset(&temp, 0, sizeof(temp));

    for(int i = 0; i < numsSize; i++)
    {
        if(temp[nums[i] - 1] == 0)
        {
            temp[nums[i] - 1] = 1;
        }
        else
        {
            return nums[i];
        }
    }

    return -1;;
}