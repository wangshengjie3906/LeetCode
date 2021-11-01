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

        /*��ͨ�ⷨ���ռ临�ӶȺ�ʱ�临�Ӷ�Ϊ n
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

        /*�������飬ѭ������ 3 ����ʱ�������ռ临�Ӷ�Ϊ 1 */
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