uint32_t reverseBits(uint32_t n) {
    int rev = 0;

    for (int i = 0; i < 32 && n != 0; ++i) 
    {
        rev |= (n & 1) << (31 - i);
        n = (n >> 1);
    }
    
    return rev;
}