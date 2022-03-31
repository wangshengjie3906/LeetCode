double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int a = 0;
    int b = 0;

    int temp[(nums1Size + nums2Size) / 2 + 1];
/*
    for(int i = 0; i < (nums1Size + nums2Size) / 2 + 1; i++)
    {
        if(a < nums1Size && b < nums2Size)
        {
            if(nums1[a] < nums2[b])
            {
                temp[i] = nums1[a];
                a++;
            }
            else
            {
                temp[i] = nums2[b];
                b++;
            }

        }
        else if(a < nums1Size)
        {
            temp[i] = nums1[a];
            a++;
        }
        else
        {
            temp[i] = nums2[b];
            b++;
        }

        // printf("%d\n", temp[i]);
    }

    if((nums1Size + nums2Size) % 2 == 0)
    {
        return (temp[(nums1Size + nums2Size) / 2 - 1] +temp[(nums1Size + nums2Size) / 2]) / 2.0;
    }
    else
    {
        return temp[(nums1Size + nums2Size) / 2];
    }
*/

    for(int i = (nums1Size + nums2Size) / 2; i >= 0; i--)
    {
        if(a < nums1Size && b < nums2Size)
        {
            if(nums1[a] < nums2[b])
            {
                temp[i] = nums1[a];
                a++;
            }
            else
            {
                temp[i] = nums2[b];
                b++;
            }

        }
        else if(a < nums1Size)
        {
            temp[i] = nums1[a];
            a++;
        }
        else
        {
            temp[i] = nums2[b];
            b++;
        }

        // printf("%d\n", temp[i]);
    }

    if((nums1Size + nums2Size) % 2 == 0)
    {
        return (temp[0] +temp[1]) / 2.0;
    }
    else
    {
        return temp[0];
    }
}