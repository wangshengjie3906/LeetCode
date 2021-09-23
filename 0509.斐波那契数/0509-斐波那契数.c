int fib(int n){
    if(n == 0)
    {
        return 0;
    }
    if(n == 1 || n == 2)
    {
        return 1;
    }

    int *res = (int*)malloc(sizeof(int) * (n + 1));
    res[0] = 0;
    res[1] = 1;
    res[2] = 1;
    for(int i = 3; i <= n; i++)
    {
        res[i] = res[i - 1] + res[i - 2];
    }

    return res[n];
}