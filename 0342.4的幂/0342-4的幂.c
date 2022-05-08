bool isPowerOfFour(int n){
    /*
    if(n == 1)
    {
        return true;
    }

    while(n != 0)
    {
        if((n >> 4) == 1)
        {
            return true;
        }
    }
    return false;
    */

    if(n < 1)
    {
        return false;
    }

    while(n % 4 == 0)
    {
        n = n / 4;
    }

    return n == 1;

}