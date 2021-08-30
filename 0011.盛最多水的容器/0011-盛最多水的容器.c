int maxArea(int* height, int heightSize){
    /*
    //�����ⷨ�����г�ʱ
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

    //̰���㷨
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
            //ע���ȼ���������ټ�����������������һ��ȥ���㣬����ģ��·�֧ͬ��
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