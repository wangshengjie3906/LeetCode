char getChar(char c)
{
    switch(c)
    {
        case ')': return '(';
        case ']': return '[';
        case '}': return '{';
        default: return 'a';
    }
}

bool isValid(char * s){
    if(s == NULL)
    {
        return false;
    }

    int len = 0;
    for(int i  = 0; s[i] != '\0'; i++)
    {
        len = i + 1;//i �Ǵ� 0 ��ʼ����Ҫ +1
    }
    if(1 == (len & 1))//����������һ��ƥ�䲻��
    {
        return false;
    }

    int stack[(len / 2) + 1];
    int charSize = 0;

    for(int i = 0; i < len; i++)
    {
        if(getChar(s[i]) == 'a')
        {
            stack[charSize] = s[i];
            charSize++;
        }
        else
        {
            if(charSize == 0)
            {
                return false;
            }

            if(stack[charSize - 1] != getChar(s[i]))
            {
                return false;
            }

            charSize--;
        }
    }

    if(charSize == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}