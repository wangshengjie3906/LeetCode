class Solution {
    public int numWays(int n) {
        if(n == 0 || n == 1){
             return 1;
        }
        int[] temp = new int[n + 1];
        temp[0] = 1;
        temp[1] = 1;
        for(int i = 2; i <= n; i++){
            temp[i] = (temp[i-1] + temp[i-2])%1000000007;
        }

        return temp[n];
    }
}