public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int flag = 1;
        int count = 0;
        for(int i = 0;i < 32; i++){
            if((n&flag) != 0){
                count++;
            }
            flag = flag<<1;
        }
        return count;
    }
}