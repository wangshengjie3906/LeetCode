class Solution {
    public int maximumWealth(int[][] accounts) {
        int res = 0;
        int temp = 0;
        for(int[] i: accounts)
        {
            temp = 0;
            for(int j: i)
            {
                temp += j;
            }

            if(temp > res)
            {
                res = temp;
            }
        }

        return res;
    }
}