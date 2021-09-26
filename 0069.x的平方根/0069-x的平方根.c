int mySqrt(int x){
    if(x == 1)
    {  
        return 1;
    }
    int min = 0;
    int max = x;
    int m;
    while((max - min) > 1)
    {
        m = (max + min) / 2;//用x/m<m而不是m*m>x防止溢出
        if(x / m < m)
        {
            max = m;
        }
        else
        {
            min = m;
        }
    }

    return min;
}