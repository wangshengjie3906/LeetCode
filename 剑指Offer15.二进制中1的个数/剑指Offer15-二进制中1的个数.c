int hammingWeight(uint32_t n) {
    int flag = 0;

    while(n != 0)
    {
        n = n & (n - 1);
        flag++;
    }

    return flag;
}