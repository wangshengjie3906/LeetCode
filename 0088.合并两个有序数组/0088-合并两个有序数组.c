void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    /*这里的nums1Size与 nums2Size 表示数组所占长度，
    m 和 n 才表示数组的元素个数*/

    if(n == 0)
    {
        return;
    }
    if(m == 0)//元素个数，都为0
    {
        for(int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        return;
    }

    //逆向双指针
    int p1 = m - 1;
    int p2 = n - 1;

    for(int i = 0; i < nums1Size; i++)
    {
        if(nums1[p1] > nums2[p2])
        {
            nums1[nums1Size - 1 - i] = nums1[p1];
            p1--;
            if(p1 < 0)
            {
                break;//跳出循环
            }
        }
        else
        {
            nums1[nums1Size - 1 - i] = nums2[p2];
            p2--;
            if(p2 < 0)
            {
                return;//直接返回
            }
        }
        // printf("%d\n", p2);
    }

    for(int i = 0; i <= p2; i++)
    {
        nums1[i] = nums2[i];
    }
}