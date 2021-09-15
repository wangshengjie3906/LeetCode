int climbStairs(int n){
    if(n == 1)
    {
        return 1;
    }

    if(n == 2)
    {
        return 2;
    }

    /*当 n 较大时，需要递归较多，栈，运行时间，都会不理想
    return (climbStairs(n - 1) + climbStairs(n - 2));*/

    int result[n];
    result[0] = 1;
    result[1] = 2;

    for(int i = 2; i < n; i++)
    {
        result[i] = result[i - 1] + result[i - 2];
    }

    return result[n - 1];
}