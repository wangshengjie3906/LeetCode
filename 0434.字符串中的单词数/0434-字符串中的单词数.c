int countSegments(char * s){
    /*
    if(s == "")
    {
        return 0;
    }

    int count = 0;
    int i = 0;
    while(s[i] == ' ')//���Ե�һ������ǰ��ȫ���ո�
    {
        i++;
        if(i >= strlen(s))
        {
            return 0;
        }
    }
    while(s[i] != '\0')//��һ�����ʿ�ʼ����
    {
        if(s[i] == ' ')
        {
            count++;
        }

        i++;
    }

    if(s[i - 1] != ' ')//���һ���ַ����ǿո�ʱ���������һ������
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