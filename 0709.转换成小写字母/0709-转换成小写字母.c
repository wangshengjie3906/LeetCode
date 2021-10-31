char * toLowerCase(char * s){
    if(s == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            //s[i] = (char)(s[i] + 32);//方法 1
            s[i] = (char)(s[i] ^ 32);//方法 2
        } 
    }
    
    return s;
}