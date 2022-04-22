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
            sum ^= nums[i]; // 求异或的和
        }

        // 找到两个数异或和的不相同的一位，异或得 1 的，将原数组分成两类异或即可
        int flag = 0;
        while((sum & 1) == 0)
        {
            sum >>= 1;
            flag++; // 如果使用flag从开始右移，可能存在溢出的情况
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