char * longestCommonPrefix(char ** strs, int strsSize){
/*
    //二层指针为空，长度为0
    if(strs == NULL || strsSize == 0)
    {
        char *p = "";
        return p;
    }

    
    int minStrLen = strlen(strs[0]);//最短字符串的长度
    for(int i = 1; i < strsSize; i++)
    {
        if(minStrLen > strlen(strs[i]))
        {
            minStrLen = strlen(strs[i]);
        }
    }
    //空字符串
    if(minStrLen == 0)
    {
        char *p = "";
        return p;
    }

    int flag = 0;//循环判断标志
    int resLen = 0;//公共前缀个数

    char *temp = NULL;
    int isOuShu = 0;
    if((strsSize & 1) == 1)//偶数个字符串，变成偶数个进行操作
    {
        temp = strs[0];
        isOuShu = 1;
    }
    else
    {
        *temp = 0;//这里解读为ASCII==1的char
    }

    while(flag == 0)//偶数个相同的数异或为0
    {
        for (int i = 0; i < strsSize; i++)//遍历字符串
        {
            flag = flag ^ strs[i][resLen];
        }
        if(isOuShu == 1)
        {
            flag = flag ^ temp[resLen];
        }
        printf("%d\n", flag);
        printf("%d\n", resLen);
        if((flag == 0) && (resLen < minStrLen))//注意第一个判断条件
        {
            resLen++;
        }
        else
        {
            break;
        }        
    }

    //0公共前缀个数
    if(resLen == 0)
    {
        char *p = "";
        return p;
    }

    //char *result = (char *)malloc(sizeof(char) * (resLen + 1));!!!!! 为什么总是报错????
    printf("%d", resLen);
    char result[resLen];
    strncpy(result, strs[0], resLen);
    //printf("%s\n", result);
    char *p = result;
    return p;
*/

    //二层指针为空，长度为0
    if(strs == NULL || strsSize == 0)
    {
        char *p = "";
        return p;
    }

    if(strsSize == 1)
    {
        return *strs;
    }
    
    int minStrLen = strlen(strs[0]);//最短字符串的长度
    for(int i = 1; i < strsSize; i++)
    {
        if(minStrLen > strlen(strs[i]))
        {
            minStrLen = strlen(strs[i]);
        }
    }
    //空字符串
    if(minStrLen == 0)
    {
        char *p = "";
        return p;
    }

    char temp;
    int flag = 1;//判断标志
    int resLen = 0;//公共前缀个数

    while((flag == 1) && (resLen < minStrLen))
    {
        temp = strs[0][resLen];
        for (int i = 1; i < strsSize; i++)//遍历字符串
        {
            if(temp != strs[i][resLen])
            {
                flag = 0;//先执行，再break
                break;
            }
        }

        // printf("%c\n", temp);
        // printf("%d\n", flag);
        // printf("%d\n", resLen);
        if(flag == 0)
        {
            break;
        }
         resLen++;

    }

    //0公共前缀个数
    if(resLen == 0)
    {
        char *p = "";
        return p;
    }

    char *result = strs[0];
    result[resLen] = '\0'; //这里加入字符串结束符就好了
    // printf("%s\n", result);

    return result;
}