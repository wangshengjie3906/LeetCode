class Solution {
    public int[] plusOne(int[] digits) {
        // ��1����10��ģ����Ϊ0��û�з�����λ��ֱ�ӷ���
        for(int i = digits.length - 1; i >= 0; i--){
            digits[i] = digits[i] + 1;
            digits[i] = digits[i] % 10;
            if(digits[i] != 0){
                return digits;
            }
        }
        // ������9ʱ�����ȼ�1�����λΪ1������Ϊ0
        digits = new int[digits.length + 1]; // Ĭ��Ϊ0�����Բ����ٴθ�ֵ
        digits[0] = 1;
        return digits;
    }
}