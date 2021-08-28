class Solution {
    public int lastRemaining(int n, int m) {
        // if(n == 1){
        //     return 1;
        // }
        // else{
        //     return ((lastRemaining(n-1, m) + m) % m + 1);
        // }

        int temp = 0;
        for(int i = 2; i <= n; i++){
            temp = (temp + m) % i;
        }
        return temp;
    }
}