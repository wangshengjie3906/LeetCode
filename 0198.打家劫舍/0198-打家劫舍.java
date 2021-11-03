class Solution {
    public int rob(int[] nums) {
        if(nums.length == 1)
        {
            return nums[0];
        }
        if(nums.length == 2)
        {
            if(nums[0] > nums[1])
            {
                return nums[0];
            }
            else
            {
                return nums[1];
            }
        }

        /*
        int sum[] = new int[nums.length];
        sum[0] = nums[0];
        sum[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        for(int i = 2; i < nums.length; i++)
        {
            sum[i] = (nums[i] + sum[i - 2]) > (sum[i - 1]) ? (nums[i] + sum[i - 2]) : (sum[i - 1]);
        }
        return sum[nums.length - 1];
        */

        /* �������飬�Ż��ռ临�Ӷ� */
        int a = nums[0];
        int b = nums[0] > nums[1] ? nums[0] : nums[1];
        int c;
        for(int i = 2; i < nums.length; i++)
        {
            //ע��˳��
            c = b;
            b = (a + nums[i]) > b ? (a + nums[i]) : b;
            a = c;
        }
        return b;
    }
}