int mySqrt(int x){
    if(x < 2)
    {
        return x;
    }
    
    int left = 1;
    int right = x;
    int mid = 0;
    int temp = 0;

    while(left <= right)
    {
        mid = left + (right - left) / 2;
        temp = x / mid; // mid * mid 在数据较大时会溢出
        if(temp == mid)
        {
            return mid;
        }
        else if(temp < mid)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return right;
}