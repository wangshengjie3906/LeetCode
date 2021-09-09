void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    /*�����nums1Size�� nums2Size ��ʾ������ռ���ȣ�
    m �� n �ű�ʾ�����Ԫ�ظ���*/

    if(n == 0)
    {
        return;
    }
    if(m == 0)//Ԫ�ظ�������Ϊ0
    {
        for(int i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        return;
    }

    //����˫ָ��
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
                break;//����ѭ��
            }
        }
        else
        {
            nums1[nums1Size - 1 - i] = nums2[p2];
            p2--;
            if(p2 < 0)
            {
                return;//ֱ�ӷ���
            }
        }
        // printf("%d\n", p2);
    }

    for(int i = 0; i <= p2; i++)
    {
        nums1[i] = nums2[i];
    }
}