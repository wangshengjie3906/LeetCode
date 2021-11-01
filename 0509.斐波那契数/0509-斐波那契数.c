int fib(int n){
    if(n == 0)
    {
        return 0;
    }
    if(n == 1 || n == 2)
    {
        return 1;
    }

    /* 解法 1
    int *res = (int*)malloc(sizeof(int) * (n + 1));
    res[0] = 0;
    res[1] = 1;
    res[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        res[i] = res[i - 1] + res[i - 2];
    }

    return res[n];
    */

    /* 解法 2 */
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