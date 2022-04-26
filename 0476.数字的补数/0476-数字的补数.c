int findComplement(int num){
    /* way 1
    int highbit = 0;
    for (int i = 1; i <= 30; ++i)
    {
        if (num >= (1 << i))
        {
            highbit = i;
        }
        else
        {
            break;
        }            
    }
    
    int mask = (highbit == 30 ? 0x7fffffff : (1 << (highbit + 1)) - 1);
    return num ^ mask;
    */

    /* way 2 */

    int flag = 0;
    for(int i = 31; i >= 0; i--)
    {
        if(((num >> i) & 1) == 1)
        {
            flag = i; // �Ӹ�λ����λѰ�ҵ����λΪ 1 ��λ��
            break;
        }
    }

    int res = 0;
    for(int i = flag; i >= 0; i--) // ��Ҫλ�÷��ŵ�
    {
        // �� flag ��λ���Լ������λ�ã�ȡ��

        res <<= 1;

        if(((num >> i) & 1) == 0)
        {
            res |= 1;
        }
        else
        {
            res |= 0;
        }
    }

    return res;
}