/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;//���ص����鶼������Ԫ��
    int *res = malloc(sizeof(int) * 2);
    res[0] = -1;
    res[1] = -1;
    if(numsSize == 0)//�жϿ�����
    {
        return res;
    }

    /**
    //���ֲ��ң�ȷ����ʼ�м��
    int left = 0;
    int right = numsSize - 1;
    int middle = (left + right) / 2;
    int flag = 0;//�治���ڶ�Ӧֵ
    while(left <= right)
    {
        middle = (left + right) / 2;
        if(nums[middle] == target)
        {
            flag =1;
            break;
        }
        else if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else if(nums[middle] > target)
        {
            right = middle - 1;
        }
    }

    if(flag == 0)
    {
        return res;
    }

    int temp = 0;

    int middle_left = middle;//���ֻ��ע��Сλ�ã����м����ʹ���С��Χ
    while(left < middle_left)
    {
        temp = (left + middle_left) / 2;
        if(nums[temp] == target)
        {
            middle_left = temp - 1;
        }
        else if(nums[temp] < target)
        {
            left = temp + 1;
        }
    }
    res[0] = left;

    temp = 0;
    int middle_right = middle;
    while(middle_right < right)//�ұ�ֻ��ע���λ�ã����м����ߴ���С��Χ
    {
        temp = (middle_right + right) / 2;
        if(nums[temp] == target)
        {
            middle_right = temp + 1;
        }
        else if(nums[temp] > target)
        {
            right = temp - 1;
        }
    }
    res[1] = right;

    return res;

    **/

    //�����ⷨ
    int left = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == target)//��һ����ȵ�λ��
        {
            if(i == numsSize - 1)
            {
                res[1] = i;
            }
            if(left == 1)
            {
                continue;
            }
            left = 1;
            res[0] = i;
            continue;
        }

        //���ȵ�ʱ������������涼����
        if(left == 1)
        {
            res[1] = i - 1;
            break;
        }
    }

    return res;
}