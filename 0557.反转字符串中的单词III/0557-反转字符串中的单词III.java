class Solution {
    public String reverseWords(String s) {
        if(s.length() == 1)
        {
            return s;
        }

        char[] c = s.toCharArray();

        int left;
        int right;
        char temp;
        for(int i = 0; i < c.length;)
        {
            left = 0;
            right = 0;

            while(c[i] == ' ')
            {
                left = i + 1;
                i++;
                if(i >= c.length)
                {
                    break;
                }
            }
            while(c[i] != ' ')
            {
                right = i;
                i++;
                if(i >= c.length)
                {
                    break;
                }
            }
            
            while(left < right)
            {
                temp = c[left];
                c[left] = c[right];
                c[right] = temp;

                left++;
                right--;
            }
        }

        return String.valueOf(c);// 注意toString()在字符数组中没有重载，直接使用会输出地址
    }
}