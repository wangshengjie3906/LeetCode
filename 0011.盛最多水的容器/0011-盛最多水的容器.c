int maxArea(int* height, int heightSize){
    /*
    //暴力解法，运行超时
    if((height == NULL)||(heightSize < 2))
    {
        return 0;
    }
    int tempHeight = 0;
    int tempArea = 0;
    int max = height[0] < height[1] ? height[0] : height[1];
    for(int i = 0; i < heightSize - 1; i++)
    {
        for(int j = i + 1; j < heightSize; j++)
        {
            tempHeight = height[i] < height[j] ? height[i] : height[j];
            tempArea = tempHeight * (j - i);
            if(tempArea > max)
            {
                max = tempArea;
            }
        }
    }
    return max;
    */

    //贪心算法
    if((height == NULL)||(heightSize < 2))
    {
        return 0;
    }
    int tempHeight = 1;
    int tempArea = 0;
    int max = 0;
    int left = 0;
    int right = heightSize - 1;
    while(left < right)
    {
        if(height[left] <= height[right])
        {
            tempHeight = height[left];
            tempArea = tempHeight * (right - left);
            //注意先计算面积，再减，否则会错过，变成下一个去运算，错误的，下分支同样
            left++;
        }
        else
        {
            tempHeight = height[right];
            tempArea = tempHeight * (right - left);
            right--;
        }
        
        if(tempArea > max)
        {
            max = tempArea;
        }
    }
    return max;

}