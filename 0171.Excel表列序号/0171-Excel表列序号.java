class Solution {
    public int titleToNumber(String columnTitle) {
        char c[] = columnTitle.toCharArray();
        int res = 0;
        int temp;
        for(int i = 0; i < c.length; i++)
        {
            temp = c[i] - 'A' + 1;//�� 1 ��ʼ���ӱ�׼ 26 ���Ƽ� 1
            res = res * 26 + temp;
        }

        return res;
    }
}