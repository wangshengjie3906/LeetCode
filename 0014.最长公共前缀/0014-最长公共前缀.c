char * longestCommonPrefix(char ** strs, int strsSize){
/*
    //����ָ��Ϊ�գ�����Ϊ0
    if(strs == NULL || strsSize == 0)
    {
        char *p = "";
        return p;
    }

    
    int minStrLen = strlen(strs[0]);//����ַ����ĳ���
    for(int i = 1; i < strsSize; i++)
    {
        if(minStrLen > strlen(strs[i]))
        {
            minStrLen = strlen(strs[i]);
        }
    }
    //���ַ���
    if(minStrLen == 0)
    {
        char *p = "";
        return p;
    }

    int flag = 0;//ѭ���жϱ�־
    int resLen = 0;//����ǰ׺����

    char *temp = NULL;
    int isOuShu = 0;
    if((strsSize & 1) == 1)//ż�����ַ��������ż�������в���
    {
        temp = strs[0];
        isOuShu = 1;
    }
    else
    {
        *temp = 0;//������ΪASCII==1��char
    }

    while(flag == 0)//ż������ͬ�������Ϊ0
    {
        for (int i = 0; i < strsSize; i++)//�����ַ���
        {
            flag = flag ^ strs[i][resLen];
        }
        if(isOuShu == 1)
        {
            flag = flag ^ temp[resLen];
        }
        printf("%d\n", flag);
        printf("%d\n", resLen);
        if((flag == 0) && (resLen < minStrLen))//ע���һ���ж�����
        {
            resLen++;
        }
        else
        {
            break;
        }        
    }

    //0����ǰ׺����
    if(resLen == 0)
    {
        char *p = "";
        return p;
    }

    //char *result = (char *)malloc(sizeof(char) * (resLen + 1));!!!!! Ϊʲô���Ǳ���????
    printf("%d", resLen);
    char result[resLen];
    strncpy(result, strs[0], resLen);
    //printf("%s\n", result);
    char *p = result;
    return p;
*/

    //����ָ��Ϊ�գ�����Ϊ0
    if(strs == NULL || strsSize == 0)
    {
        char *p = "";
        return p;
    }

    if(strsSize == 1)
    {
        return *strs;
    }
    
    int minStrLen = strlen(strs[0]);//����ַ����ĳ���
    for(int i = 1; i < strsSize; i++)
    {
        if(minStrLen > strlen(strs[i]))
        {
            minStrLen = strlen(strs[i]);
        }
    }
    //���ַ���
    if(minStrLen == 0)
    {
        char *p = "";
        return p;
    }

    char temp;
    int flag = 1;//�жϱ�־
    int resLen = 0;//����ǰ׺����

    while((flag == 1) && (resLen < minStrLen))
    {
        temp = strs[0][resLen];
        for (int i = 1; i < strsSize; i++)//�����ַ���
        {
            if(temp != strs[i][resLen])
            {
                flag = 0;//��ִ�У���break
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

    //0����ǰ׺����
    if(resLen == 0)
    {
        char *p = "";
        return p;
    }

    char *result = strs[0];
    result[resLen] = '\0'; //��������ַ����������ͺ���
    // printf("%s\n", result);

    return result;
}