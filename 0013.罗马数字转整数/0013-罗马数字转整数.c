int getValue(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char * s){
    if(s == NULL)
    {
        return 0;
    }

    int lenth = strlen(s);
    if(lenth == 1)
    {
        return getValue(*s);
    }

    //Ҳ����ʹ�ÿ���ָ��
    // int slow = 0;
    // int fast = 1;

    int sum = 0;

    for(int i = 0; i < lenth - 1; i++)//ע��������Ͳ���ѭ�����е������ڶ�λ
    {
        if(getValue(s[i]) < getValue(s[i + 1]))
        {
            sum -= getValue(s[i]);
        }
        else
        {
            sum += getValue(s[i]);
        }
    }
    sum += getValue(s[lenth - 1]);//�������һλ��һ��Ϊ��

    return sum;
}