int majorityElement(int* nums, int numsSize){
    /*
    //����ͳ�Ʒ�
    //������������������ n/2 ,ǰ�벿��һ�����ֹ�
    int count;
    for(int i = 0; i < ((numsSize + 1) / 2); i++)
    {
        count = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        if(count >= ((numsSize + 1) / 2))
        {
            return nums[i];
        }
    }

    return nums[0];//ѭ����δ�ҵ�ʱ
    */

    /*ͶƱ�㷨*/
    int candidate = -1;
    int count = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == candidate)
        {
            ++count;
        }
        else if(--count < 0)
        {
            candidate = nums[i];
            count = 1;
        }
    }
    
    return candidate;
}