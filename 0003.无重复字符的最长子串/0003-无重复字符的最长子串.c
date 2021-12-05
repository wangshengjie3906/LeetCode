/*
void resetStates(int* states)
{
    for(int i = 0; i < 26; i++)
    {
        states[i] = 0;
    }
    return;
}
*/

int lengthOfLongestSubstring(char * s){
    /*
    int states[26];
    resetStates(&states);
    int len = 0;
    int max = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        if(states[(s[i] - 'A')] == 0)
        {
            states[(s[i] - 'A')] = 1;
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
            }
            len = 0;
            resetStates(&states);
        }
    }
    
    return max;
    */


    int result = 0;
    char *tail = s;
    char *head = s;
    char *p;

    while(*head != '\0')
    {
        for(p = tail; p < head; p++)
        {
            if(*p == *head)
            {
                tail = p + 1;
                break;
            }
        }
        result = fmax(head - tail + 1, result);
        head++;
    }

    return result;
}