class Solution {
    public int singleNumber(int[] nums) {
        int temp[] = new int[32];
        for(int n: temp)
        {
            n = 0;
        }

        int i = 0;
        for(int n: nums)
        {
            i = 31; // 特别需要注意，数组记录的位数的方向，与下面保持一致
            while(n != 0)
            {
                temp[i--] += n & 1; //
                n = n >>> 1; // 需要用无符号左移方法
            }
        }

        int res = 0;
        int m = 3;
        for(i = 0; i < 32; i++)
        {
            res <<= 1;
            res |= temp[i] % m; // 如果上面记录是 i = 0，这是反过来
        }
        return res;
    }
}