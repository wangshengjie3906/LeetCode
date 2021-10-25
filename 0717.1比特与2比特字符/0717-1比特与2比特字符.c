bool isOneBitCharacter(int* bits, int bitsSize){
    if(bitsSize == 1)
    {
        return true;
    }
    int i = 0;
    while(i < bitsSize)
    {
        if(bits[i] == 1)
        {
            i += 2;
        }
        else
        {
            i++;
        }

        if(i == (bitsSize - 1))
        {
            return true;
        }
    }

    return false;
}