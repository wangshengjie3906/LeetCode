class Solution {
    public int[] countBits(int n) {
        int res[] = new int[n + 1];//�� 1
        res[0] = 0;
        for(int i = 1; i <= n; i++)//�� 1 ��ʼ�������� n
        {
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
}