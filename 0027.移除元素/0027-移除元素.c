int removeElement(int* nums, int numsSize, int val){
    //�ж������Ƿ��쳣
    if(nums == NULL || numsSize == 0)
    {
        return 0;
    }

    int flag = 0;//���
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)//��¼��ͬ��Ԫ�ظ���
        {
            flag++;
            continue;
        }

        if(flag == 0)//������һ����ͬԪ��֮ǰ�����ƶ�(������Լ���ֵ)
        {
            continue;
        }

        //����Ԫ����ǰ�ƶ���Ӧ����
        nums[i - flag] = nums[i];
    }

    return (numsSize - flag);//�ܳ��ȼ�ȥ��ͬ�ĸ���
}