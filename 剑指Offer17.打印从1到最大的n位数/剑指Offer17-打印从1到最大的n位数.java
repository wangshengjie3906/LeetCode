class Solution {
    public int[] printNumbers(int n) {
        int len = 1;
        for(int i = 1;i <= n;i++){
            len = len*10;
        }

        int[] result = new int[len - 1];
        for(int i = 0;i < len - 1;i++){
            result[i] = i+1;
        }
        return result;
    }
}