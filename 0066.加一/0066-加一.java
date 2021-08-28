class Solution {
    public int[] plusOne(int[] digits) {
        // 加1，求10的模，不为0则没有发生进位，直接返回
        for(int i = digits.length - 1; i >= 0; i--){
            digits[i] = digits[i] + 1;
            digits[i] = digits[i] % 10;
            if(digits[i] != 0){
                return digits;
            }
        }
        // 当都是9时，长度加1，最高位为1，其余为0
        digits = new int[digits.length + 1]; // 默认为0，可以不用再次赋值
        digits[0] = 1;
        return digits;
    }
}