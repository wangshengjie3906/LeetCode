public class Solution {

    public int splitArray(int[] nums, int m) {
        int max = 0;
        int sum = 0;

        // ���㡸��������Եĺ͵����ֵ�������½�
        for (int num : nums) {
            max = Math.max(max, num);
            sum += num;
        }

        // ʹ�á����ֲ��ҡ�ȷ��һ��ǡ���ġ���������Եĺ͵����ֵ����
        // ʹ������Ӧ�ġ�������ķָ�����ǡ�õ��� m
        int left = max;
        int right = sum;
        while (left < right) {
            int mid = left + (right - left) / 2;

            int splits = split(nums, mid);
            if (splits > m) {
                // ����ָ���̫�࣬˵������������Եĺ͵����ֵ��̫С����ʱ��Ҫ������������Եĺ͵����ֵ������
                // ��һ�������������� [mid + 1, right]
                left = mid + 1;
            } else {
                // ��һ����������������һ�ֵķ������� [left, mid]
                right = mid;
            }
        }
        return left;
    }

    /***
     *
     * @param nums ԭʼ����
     * @param maxIntervalSum ��������Եĺ͵����ֵ
     * @return ���㲻��������������Եĺ͵����ֵ���ķָ���
     */
    private int split(int[] nums, int maxIntervalSum) {
        // ������һ���ָ�
        int splits = 1;
        // ��ǰ����ĺ�
        int curIntervalSum = 0;
        for (int num : nums) {
            // ���Լ��ϵ�ǰ��������������������ȥ�����ˡ���������Եĺ͵����ֵ�����Ͳ��������������¯��
            if (curIntervalSum + num > maxIntervalSum) {
                curIntervalSum = 0;
                splits++;
            }
            curIntervalSum += num;
        }
        return splits;
    }
}