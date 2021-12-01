char * reverseWords(char * s){
    int left;
    int right;
    char temp;
    int i = 0;
    
    while(s[i] != '\0')
    {
        left = 0;
        right = 0;

        while(s[i] == ' ')
        {
            left = i + 1;
            i++;
            if(s[i] == '\0')
            {
                break;
            }
        }
        while(s[i] != ' ')
        {
            right = i;
            i++;
            if(s[i] == '\0')
            {
                break;
            }
        }
        
        while(left < right)
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }

    return s;
}