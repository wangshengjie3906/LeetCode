int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    if(accounts == NULL || accountsSize == 0)
    {
        return 0;
    }

    int max = 0;
    int temp = 0;
    for(int i = 0; i < accountsSize; i++)
    {
        temp = 0;
        for(int j = 0; j < *accountsColSize; j++)
        {
            temp += accounts[i][j];
        }

        if(max < temp)
        {
            max = temp;
        }
    }

    return max;
}