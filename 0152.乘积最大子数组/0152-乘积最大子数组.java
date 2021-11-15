class Solution {
    public int maxProduct(int[] nums) {
        /** 方法 1
        //1.负数为偶数个，则整个数组的各个值相乘为最大值；
        //2.负数为奇数个，则从左边开始，乘到最后一个负数停止有一个“最大值”
        //从右边也有一个“最大值”，比较，得出最大值
         
        
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

        /* 方法 2：动态规划，滚动数组优化空间复杂度*/

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