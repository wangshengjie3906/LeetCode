char * defangIPaddr(char * address){
    //������ address ��һ����Ч�� IPv4 ��ַ�����ü����쳣

    int len = strlen(address);
    char *res = malloc(sizeof(char) * (len + 7));
    int flag = 0;
    for(int i = 0; i < len; i++)
    {
        if(address[i] != '.')
        {
            res[flag++] = address[i];
        }
        else
        {
            res[flag++] = '[';
            res[flag++] = '.';
            res[flag++] = ']';
        }
    }

    res[flag] = '\0';//������

    return res;
}