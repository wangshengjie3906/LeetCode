int countSegments(char * s){
    /*
    if(s == "")
    {
        return 0;
    }

    int count = 0;
    int i = 0;
    while(s[i] == ' ')//忽略第一个单词前的全部空格
    {
        i++;
        if(i >= strlen(s))
        {
            return 0;
        }
    }
    while(s[i] != '\0')//第一个单词开始计数
    {
        if(s[i] == ' ')
        {
            count++;
        }

        i++;
    }

    if(s[i - 1] != ' ')//最后一个字符不是空格时，还有最后一个单词
    {
        count++;
    }

    return count;
    */

    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
        {
            count++;
        }
    }

    return count;
}