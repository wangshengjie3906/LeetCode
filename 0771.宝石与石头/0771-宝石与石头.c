int numJewelsInStones(char * jewels, char * stones){
    int j_len = strlen(jewels);
    int s_len = strlen(stones);
    int count = 0;
    
    for (int i = 0; i < s_len; i++)
    {
        for (int j = 0; j < j_len; j++)
        {
            if (stones[i] == jewels[j])
            {
                count++;
                break;
            }
        }
    }

    return count;
}