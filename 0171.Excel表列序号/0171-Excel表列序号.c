int titleToNumber(char * columnTitle){
    //char *temp = columnTitle;
    int res = 0;
    int temp = 0;
    for(int i = 0; i < strlen(columnTitle); i++)
    {
        temp = (int)(columnTitle[i] - 'A') + 1;//从 1 开始，从标准 26 进制加 1
        res = res * 26 + temp;
    }

    return res;
}