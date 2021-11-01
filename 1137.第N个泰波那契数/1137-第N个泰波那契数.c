int tribonacci(int n){
    if(n == 0)
    {
        return 0;
    }
    if(n == 1 || n == 2)
    {
        return 1;
    }

    /* 解法 1
    int *temp = (int*)malloc(sizeof(int) * (n + 1));
    temp[0] = 0;
    temp[1] = 1;
    temp[2] = 1;

    for(int i = 3; i <= n; i++)
    {
        temp[i] = temp[i - 1] + temp[i - 2] + temp[i - 3];
    }

    return temp[n];
    */

    /* 解法 2，空间复杂度优化，滚动数组，空间复杂度为 1 */
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