void reverseString(char* s, int sSize){
    /* //方法 1
    if(sSize == 1)
    {
        return;
    }
    
    char temp;
    for(int i = 0; i < sSize / 2; i++)
    {
        temp = s[i];
        s[i] = s[sSize - 1 - i];
        s[sSize - 1 - i] = temp;
    }

    return;

    */

    //方法 2
    if(sSize == 1)
    {
        return;
    }

    int left = 0;
    int right = sSize - 1;
    char temp;

    while(left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        left++;
        right--;
    }

    return;
}