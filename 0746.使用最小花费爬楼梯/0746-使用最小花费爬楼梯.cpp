class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        /*�ռ临�Ӷ��Ż�����������*/
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 2; i < cost.size() + 1; i++)
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
};