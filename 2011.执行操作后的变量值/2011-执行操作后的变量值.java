class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int res = 0;
        for(int i = 0; i < operations.length; i++)
        {
            switch(operations[i])
            {
                case "++X":
                case "X++":
                    res++;
                    break;

                //只有 4 种操作
                default:
                    res--;
                    break;
            }
        }

        return res;
    }
}