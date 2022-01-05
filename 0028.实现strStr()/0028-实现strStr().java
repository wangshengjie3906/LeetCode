class Solution {
    public int strStr(String haystack, String needle) {
        // �����ж��Ⱥ��ܵ���
        if (needle.length() == 0)
        {
            return 0;
        }

        if (haystack.length() == 0 || needle.length() > haystack.length())
        {
            return -1;
        }

        // �����ⷨ
        int len = needle.length();
        int step_a = 0;
        int step_b = 0;
        for (int i = 0; i <= (haystack.length() - len); i++)
        {
            step_a = i;
            step_b = 0;
            while ((step_b < len) && (haystack.charAt(step_a) == needle.charAt(step_b)))
            {
                step_a++;
                step_b++;
            }

            if (step_b == len)
            {
                return i;
            }
        }

        return -1;
    }
}