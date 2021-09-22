int rangeBitwiseAnd(int left, int right){
    //brain kernighan算法应用

    while(left < right)//按题目意思，left <= right 恒成立
    {
        right = right & (right - 1);
    }

    return right;
}