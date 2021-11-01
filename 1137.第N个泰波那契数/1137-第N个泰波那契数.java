class Solution {
    public int tribonacci(int n) {
        if(n == 0)
        {
            return 0;
        }
        else if(n == 1 || n == 2)
        {
            return 1;
        }
        else if(n == 3)
        {
            return 2;
        }
        
        /* 滚动数组，空间复杂度为 1 */
        int a = 0;
        int b = 1;
        int c = 1;
        int d = 2;
        for(int i = 4; i <= n; i++)
        {
            a = b;
            b = c;
            c = d;
            d = a + b + c;
        }
        return d;
    }
}