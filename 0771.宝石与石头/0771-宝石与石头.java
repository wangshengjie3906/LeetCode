class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int j_len = jewels.length();
        int s_len = stones.length();
        char stones1[] = stones.toCharArray();
        char jewels1[] = jewels.toCharArray();
        int count = 0;
        
        for (int i = 0; i < s_len; i++)
        {
            for (int j = 0; j < j_len; j++)
            {
                if (stones1[i] == jewels1[j])
                {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
}