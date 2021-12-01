class Solution {
    public void reverseString(char[] s) {
        if(s.length == 1)
        {
            return;
        }
        /* 方法 1
        char temp;
        for(int i = 0; i < s.length / 2; i++)
        {
            temp = s[i];
            s[i] = s[s.length - 1 - i];
            s[s.length - 1 - i] = temp;
        }
        */
        // 方法 2
        int left = 0;
        int right = s.length - 1;
        char temp;

        while(left < right)
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
        
        return;
    }
}