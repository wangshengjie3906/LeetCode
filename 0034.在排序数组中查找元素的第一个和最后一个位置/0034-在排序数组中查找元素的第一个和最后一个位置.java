class Solution {
    public int[] searchRange(int[] nums, int target) {
        int res[] = new int[2];
        res[0] = -1;
        res[1] = -1;
        if(nums.length == 0)//�жϿ�����
        {
            return res;
        }

        //�����ⷨ
        int left = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] == target)//��һ����ȵ�λ��
            {
                if(i == nums.length - 1)
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
}