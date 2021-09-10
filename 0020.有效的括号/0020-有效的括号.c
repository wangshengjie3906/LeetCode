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
        len = i + 1;//i 是从 0 开始，需要 +1
    }
    if(1 == (len & 1))//奇数个括号一定匹配不了
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