char * addBinary(char * a, char * b){
    /*转数字，容易溢出
    int aLenth = strlen(a);
    int bLenth = strlen(b);
    
    // int maxLength = aLenth > bLenth ? aLenth : bLenth;
    int maxLength = 0;
    int minLength = 0;
    int flag = 0;

    if(aLenth > bLenth)
    {
        maxLength = aLenth;
        minLength = bLenth;
        flag = 1;
    }
    else
    {
        maxLength = bLenth;
        minLength = aLenth;
        flag = 0;
    }

    char *res = (char*)malloc(sizeof(char) * (maxLength + 1));
    for(int i = 0; i < maxLength + 1; i++)
    {
        res[i] = '0';
    }

    int temp;
    for(int i = 1; i <= minLength; i++)
    {
        temp = (a[aLenth - i] - '0') + (b[bLenth - i] - '0') + (res[maxLength - i] - '0');
        if(temp == 1)
        {
            res[maxLength - i] = '1';
        }
        else if(temp == 2)
        {
            res[maxLength - i] = '0';
            res[maxLength - i -1] = '1';
        }
        else if(temp == 3)
        {
            res[maxLength - i] = '1';
            res[maxLength - i -1] = '1';
        }
    }
printf("hrere");
    for(int i = 1; i <= maxLength - minLength; i++)
    {
        if(flag == 1)
        {
        temp = (a[maxLength - minLength - i] - '0') + (res[maxLength - minLength - i] - '0');
        }
        else
        {
            temp = (b[maxLength - minLength - i] - '0') + (res[maxLength - minLength - i] - '0');
        }
            
        if(temp == 1)
        {
            res[maxLength - minLength - i] = '1';
        }
        else if(temp == 2)
        {
            res[maxLength - minLength - i] = '0';
            res[maxLength - minLength - i - 1] = '1';
        }
    }

    return res;
    */

    int aLength = strlen(a);
    int bLength = strlen(b);
    int maxLength;
    int minLength;

    if(aLength >= bLength)
    {
        maxLength = aLength;
        minLength = bLength;
    }
    else
    {
        maxLength = bLength;
        minLength = aLength;
    }

    int *aArray = malloc(sizeof(int) * aLength);
    int *bArray = malloc(sizeof(int) * bLength);
    //转换为int数字，并前后反转，反转比较好思考运算
    for(int i = 0; i < aLength; i++)
    {
        aArray[i] = a[aLength - i - 1] - '0';
    }
    for(int i = 0; i < bLength; i++)
    {
        bArray[i] = b[bLength - i - 1] - '0';
    }
    
    int *array = malloc(sizeof(int) * (maxLength + 1));
    for(int i = 0; i < maxLength + 1; i++)
    {
        array[i] = 0;
        // printf("%d",i);
    }
    int temp = 0;
    for(int i = 0; i < maxLength; i++)
    {
        if(i < minLength)
        {
            temp = aArray[i] + bArray[i] + array[i];
        }
        else
        {
            if(aLength > bLength)
            {
                temp = aArray[i] + array[i];
            }
            else
            {
                temp = bArray[i] + array[i];
            }
        }

        if(temp == 2)
        {
            array[i] = 0;
            array[i + 1] = 1;
        }
        else if(temp == 3)
        {
            array[i] = 1;
            array[i + 1] = 1;
        }
        else
        {
            array[i] = temp;
        }
    }

    if(array[maxLength] == 0)//最高位没有进位的情况
    {
        maxLength--;
    }

    char *res = malloc(sizeof(char) * (maxLength + 2));//多一位保存结束符
    
    //int转化为char，并反转回来
    for(int i = 0;i < maxLength + 1; i++)
    {
        if(array[i] == 0)
        {
            res[maxLength + 1 - i - 1] = '0';
            // printf("%d",i);
        }
        else
        {
            res[maxLength + 1 - i - 1] = '1';
            // printf("%d",i);
        }
        // printf("%d",maxLength + 1 - i - 1);
    }

    res[maxLength + 1] = '\0';//字符数组变字符串，需要人为添加字符串结束符

    // printf("%s",res);
    // return NULL;
    return res;
}