class Solution {
    public int singleNumber(int[] nums) {
        int temp[] = new int[32];
        for(int n: temp)
        {
            n = 0;
        }

        int i = 0;
        for(int n: nums)
        {
            i = 31; // �ر���Ҫע�⣬�����¼��λ���ķ��������汣��һ��
            while(n != 0)
            {
                temp[i--] += n & 1; //
                n = n >>> 1; // ��Ҫ���޷������Ʒ���
            }
        }

        int res = 0;
        int m = 3;
        for(i = 0; i < 32; i++)
        {
            res <<= 1;
            res |= temp[i] % m; // ��������¼�� i = 0�����Ƿ�����
        }
        return res;
    }
}