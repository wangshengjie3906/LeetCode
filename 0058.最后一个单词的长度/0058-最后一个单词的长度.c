int lengthOfLastWord(char * s){
    if(s == NULL)
    {
        return 0;
    }

    int sLen = strlen(s);
    //printf("%d\n",sLen);
    int len = 0;
    int flag = 0;
    for(int i = sLen - 1; i >= 0; i--)//方向寻找第一个字符串
    {
        if(s[i] != ' ')
        {
            flag = 1;//第一次不为空格
            len++;
        }
        
        if(flag == 1)//再次遇到空格，字符串结束
        {
            if(s[i] == ' ')
            {
                break;
            }
        }
    }

    return len;
}