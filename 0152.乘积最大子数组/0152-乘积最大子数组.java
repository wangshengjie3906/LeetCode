class Solution {
    public int maxProduct(int[] nums) {
        /** ���� 1
        //1.����Ϊż����������������ĸ���ֵ���Ϊ���ֵ��
        //2.����Ϊ�������������߿�ʼ���˵����һ������ֹͣ��һ�������ֵ��
        //���ұ�Ҳ��һ�������ֵ�����Ƚϣ��ó����ֵ
         
        
        if (nums.length == 0)
        {
            return 0;
        }

        int res = nums[0];
        int temp = 1;

        for (int n : nums)
        {
            temp *= n;
            res = Math.max(temp, res);
            if(n == 0)
            {
                temp = 1;
            }
        }

        temp = 1;
        for (int i = nums.length - 1; i >= 0; i--)
        {
            temp *= nums[i];
            res = Math.max(temp, res);
            if(nums[i] == 0)
            {
                temp = 1;
            }
        }

        return res;
        */

        /* ���� 2����̬�滮�����������Ż��ռ临�Ӷ�*/

        if (nums.length == 0)
        {
            return 0;
        }

        int max = nums[0];
        int min = nums[0];
        int res = nums[0];
        int temp_max;
        int temp_min;

        for (int i = 1; i < nums.length; i++)
        {
            temp_max = max;
            temp_min = min;
            max = Math.max(temp_max * nums[i], Math.max(nums[i], temp_min * nums[i]));
            min = Math.min(temp_max * nums[i], Math.min(nums[i], temp_min * nums[i]));
            res = Math.max(max, res);
        }
        
        return res;
    }
}