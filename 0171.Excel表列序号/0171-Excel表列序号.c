int titleToNumber(char * columnTitle){
    //char *temp = columnTitle;
    int res = 0;
    int temp = 0;
    for(int i = 0; i < strlen(columnTitle); i++)
    {
        temp = (int)(columnTitle[i] - 'A') + 1;//�� 1 ��ʼ���ӱ�׼ 26 ���Ƽ� 1
        res = res * 26 + temp;
    }

    return res;
}