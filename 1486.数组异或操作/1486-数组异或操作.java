class Solution {
    public int xorOperation(int n, int start) {
        // 1 ,两次循环，创建数组
        // int[] temp = new int[n];
        // for(int i = 0; i < n; i++){
        //     temp[i] = start + 2 * i;
        // }
        // int result = temp[0];
        // for(int i = 1; i < n; i++){
        //     result = (result ^ temp[i]);
        // }
        // return result;

        // 2，一次循环，不创建数组
        int result = start;
        for(int i = 1; i < n; i++){
            result = (result ^ (start + 2 * i));
        }
        return result;
    }
}