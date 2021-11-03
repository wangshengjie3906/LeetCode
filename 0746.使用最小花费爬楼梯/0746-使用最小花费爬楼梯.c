int minCostClimbingStairs(int* cost, int costSize){
    /*
    int sum[costSize + 1];
    sum[0] = 0;
    sum[1] = 0;
    for(int i = 2; i < costSize + 1; i++)
    {
        if((sum[i - 1] + cost[i - 1]) <= (sum[i - 2] + cost[i - 2]))
        {
            sum[i] = sum[i - 1] + cost[i - 1];
        }
        else
        {
            sum[i] = sum[i - 2] + cost[i - 2];
        }
        
    }
    return sum[costSize];
    */

    /*空间复杂度优化，滚动数组*/
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 2; i < costSize + 1; i++)
    {
        //注意 a , b 的顺序，极其容易出错
        if((b + cost[i - 1]) <= (a + cost[i - 2]))
        {
            c = b + cost[i - 1];
        }
        else
        {
           c = a + cost[i - 2];
        }
        a = b;
        b = c;
    }
    return b;//注意最终返回的是 b，极其容易出错
}