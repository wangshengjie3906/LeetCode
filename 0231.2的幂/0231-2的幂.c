bool isPowerOfTwo(int n){
    //�������
    if(n <= 0)
    {
        return false;
    }

    //brain kernighan�㷨Ӧ��
    if((n & (n - 1)) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}