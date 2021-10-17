int finalValueAfterOperations(char ** operations, int operationsSize){
    int res = 0;
    for(int i = 0; i < operationsSize; i++)
    {
        if(!(strcmp(*(operations + i), "++X") && strcmp(*(operations + i), "X++")))
        {
            res++;
        }
        else
        {
            res--;
        }
    }

    return res;
}