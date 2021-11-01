class Solution {
    public int fib(int n) {
        if(n == 0)
        {
            return 0;
        }
        if(n == 1 || n == 2)
        {
            return 1;
        }

        /*普通解法，空间复杂度和时间复杂度为 n
        int f[] = new int[n + 1];
        f[0] = 0;
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i <= n; i++)
        {
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
        */

        /*滚动数组，循环利用 3 个临时变量，空间复杂度为 1 */
        int a = 0;
        int b = 1;
        int c = 1;
        for(int i = 3; i <= n; i++)
        {
            a = b;
            b = c;
            c = a + b;
        }
        return c;
    }
}