int rangeBitwiseAnd(int left, int right){
    //brain kernighan�㷨Ӧ��

    while(left < right)//����Ŀ��˼��left <= right �����
    {
        right = right & (right - 1);
    }

    return right;
}