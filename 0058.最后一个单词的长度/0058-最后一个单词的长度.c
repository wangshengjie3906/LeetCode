int lengthOfLastWord(char * s){
    if(s == NULL)
    {
        return 0;
    }

    int sLen = strlen(s);
    //printf("%d\n",sLen);
    int len = 0;
    int flag = 0;
    for(int i = sLen - 1; i >= 0; i--)//����Ѱ�ҵ�һ���ַ���
    {
        if(s[i] != ' ')
        {
            flag = 1;//��һ�β�Ϊ�ո�
            len++;
        }
        
        if(flag == 1)//�ٴ������ո��ַ�������
        {
            if(s[i] == ' ')
            {
                break;
            }
        }
    }

    return len;
}