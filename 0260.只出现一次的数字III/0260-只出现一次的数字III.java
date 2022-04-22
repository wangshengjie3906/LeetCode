class Solution {
    public int[] singleNumber(int[] nums) {
        if(nums.length == 0)
        {
            return null;
        }
        if(nums.length == 2)
        {
            return nums;
        }

        int sum = 0;
        for(int i = 0; i < nums.length; i++)
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

        int res[] = new int[2];
        res[0] = 0;
        res[1] = 0;
        for(int i = 0; i < nums.length; i++)
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
}