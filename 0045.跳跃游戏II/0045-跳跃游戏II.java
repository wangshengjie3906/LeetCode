class Solution {
    public int jump(int[] nums) {
        int max_far = 0;// Ŀǰ����������Զλ��
        int step = 0;   // ��Ծ����
        int end = 0;    // �ϴ���Ծ�ɴﷶΧ�ұ߽磨�´ε����������㣩
        for(int i = 0; i < nums.length - 1; i++)
        {
            max_far = max_far > (i + nums[i]) ? max_far : (i + nums[i]);
            // �����ϴ���Ծ�ܵ�����ұ߽���
            if (i == end)
            {
                end = max_far;  // Ŀǰ����������Զλ�ñ�����´�����λ�õ��б߽�
                step++;         // ������һ����Ծ
            }
        }
        return step;
    }
}