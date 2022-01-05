int strStr(char * haystack, char * needle){
    // 两个判断先后不能调换
    if (strlen(needle) == 0)
    {
        return 0;
    }

    if (strlen(haystack) == 0)
    {
        return -1;
    }
    
    
    if (strlen(needle) > strlen(haystack))
    {
        return -1;
    }

    // 暴力解法
    int len = strlen(needle);
    int step_a = 0;
    int step_b = 0;
    for (int i = 0; i <= (strlen(haystack) - len); i++)
    {
        step_a = i;
        step_b = 0;
        while ((step_b < len) && (haystack[step_a] == needle[step_b]))
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