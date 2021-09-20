class Solution {
    public int[] countBits(int n) {
        int res[] = new int[n + 1];//加 1
        res[0] = 0;
        for(int i = 1; i <= n; i++)//从 1 开始，到等于 n
        {
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
}