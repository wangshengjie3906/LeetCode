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

    /*�ռ临�Ӷ��Ż�����������*/
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 2; i < costSize + 1; i++)
    {
        //ע�� a , b ��˳�򣬼������׳���
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
    return b;//ע�����շ��ص��� b���������׳���
}