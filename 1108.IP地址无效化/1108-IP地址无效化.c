char * defangIPaddr(char * address){
    //给出的 address 是一个有效的 IPv4 地址，不用检验异常

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

    res[flag] = '\0';//结束符

    return res;
}