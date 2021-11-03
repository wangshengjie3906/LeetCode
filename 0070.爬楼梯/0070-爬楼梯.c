int climbStairs(int n){
    if(n == 1)
    {
        return 1;
    }

    if(n == 2)
    {
        return 2;
    }

    /*�� n �ϴ�ʱ����Ҫ�ݹ�϶࣬ջ������ʱ�䣬���᲻����
    return (climbStairs(n - 1) + climbStairs(n - 2));*/

    /*
    int result[n];
    result[0] = 1;
    result[1] = 2;

    for(int i = 2; i < n; i++)
    {
        result[i] = result[i - 1] + result[i - 2];
    }
    return result[n - 1];*/

    //�ռ临�Ӷ��Ż�
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