class Solution {
    public boolean isPowerOfTwo(int n) {
    
        //特殊情况
        if(n <= 0)
        {
            return false;
        }

        //brain kernighan算法应用
        if((n & (n - 1)) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}