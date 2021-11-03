class Solution {

    int getRob(int[] nums, int start, int end)
    {
        /*
        int sum[] = new int[end - start];
        sum[0] = nums[start];
        sum[1] = nums[start] > nums[start + 1] ? nums[start] : nums[start + 1];
        for(int i = 2; i < end - start; i++)
        {
            sum[i] = (nums[start + i] + sum[start + i - 2]) > (sum[start + i - 1]) ? (nums[start + i] + sum[start + i - 2]) : (sum[start + i - 1]);
        }
        return sum[end - start - 1];
        */

        /* 滚动数组，优化空间复杂度 */
        int a = nums[start];
        int b = nums[start] > nums[start + 1] ? nums[start] : nums[start + 1];
        int c;
        for(int i = start + 2; i < end; i++)
        {
            //注意顺序
            c = b;
            b = (a + nums[i]) > b ? (a + nums[i]) : b;
            a = c;
        }
        return b;
    }

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

        int sumA = getRob(nums, 0, nums.length - 1);
        int sumB = getRob(nums, 1, nums.length);
        if(sumA > sumB)
        {
            return sumA;
        }
        else
        {
            return sumB;
        }
    }
}