class Solution {
    public int climbStairs(int n) {
        if(n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }
        else
        {
            /*当 n 较大时，需要递归较多，栈，运行时间，都会不理想
            return (climbStairs(n - 1) + climbStairs(n - 2));*/

            /* 空间复杂度可以优化
            int[] temp= new int[n];
            temp[0] = 1;
            temp[1] = 2;
            for(int i = 2; i < n; i++)
            {
                temp[i] = temp[i - 1] + temp[i - 2];
            }
            return temp[n - 1];*/

            int a = 1;
            int b = 2;
            int c = 3;
            for(int i = 3; i < n; i++)
            {
                a = b;
                b = c;
                c = a + b;
            }
            return c;
        }
        //return -1;
    }
}