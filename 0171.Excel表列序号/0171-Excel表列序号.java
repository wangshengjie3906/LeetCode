class Solution {
    public int titleToNumber(String columnTitle) {
        char c[] = columnTitle.toCharArray();
        int res = 0;
        int temp;
        for(int i = 0; i < c.length; i++)
        {
            temp = c[i] - 'A' + 1;//从 1 开始，从标准 26 进制加 1
            res = res * 26 + temp;
        }

        return res;
    }
}