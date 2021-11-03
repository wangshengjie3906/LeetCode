class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        /*空间复杂度优化，滚动数组*/
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 2; i < cost.size() + 1; i++)
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
};