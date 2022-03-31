/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    // ˫ָ�뷨
    
    if (numsSize == 0)
    {
        return nums;
    }
    
    *returnSize = numsSize;

    // ��ʱ�������� malloc �������޷�ֱ�ӷ���
    int res[numsSize];

    // �ж���������ȱ�����ʱ�����
    for (int left = 0, right = numsSize - 1, temp = numsSize - 1; left <= right;)
    {
        // �ǵݼ�����ƽ�������ڸ������
        if (nums[left] * nums[left] > nums[right] * nums[right])
        {
            res[temp] = nums[left] * nums[left];
            left++;
        }
        else
        {
            res[temp] = nums[right] * nums[right];
            right--;
        }

        temp--;
    }

    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = res[i];
    }

    return nums;
}