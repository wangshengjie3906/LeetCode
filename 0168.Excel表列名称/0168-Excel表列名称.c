void reverse(char* str, int strSize)
{
    int left = 0, right = strSize - 1;
    while (left < right) {
        char tmp = str[left];
        str[left] = str[right], str[right] = tmp;
        left++;
        right--;
    }
}

char * convertToTitle(int columnNumber){
    /** 目前此注释里的方法还是有问题
    char temp_cahr;
    char *temp_res = "";
    char *res = "";
    int length = 0;
    while(columnNumber > 0)
    {
        length++;
        temp_res = res;
        res = malloc(sizeof(char) * (length + 1));
        columnNumber--;//转化为标准 26 进制
        temp_cahr = (char)(columnNumber % 26 + 'A');
        strcpy(res, temp_res);
        printf("%d %d\n",length,strlen(res));
        res[length - 1] = temp_cahr;
        columnNumber /= 26;
    }

    //printf("%s\n",res);
    for(int i = 0; i < length; i++)
    {
        temp_cahr = res[i];
        res[i] = res[length - i - 1];
        res[length - i - 1] = temp_cahr;
    }

    res[length] = '\0';
    printf("%s\n",res);

    return res;
    **/

    char* ans = malloc(sizeof(char) * 8);
    int ansSize = 0;
    while (columnNumber > 0)
    {
        int a0 = (columnNumber - 1) % 26 + 1;
        ans[ansSize++] = a0 - 1 + 'A';
        columnNumber = (columnNumber - a0) / 26;
    }
    ans[ansSize] = '\0';

    reverse(ans, ansSize);

    return ans;
    
}
