public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int result = 0;
        int flag = 1;
        while(n != 0){
            result = result + (n & flag); // 计算正确
            //result = result + n & flag; //计算错误
            // 运算符之间的优先级!
            n = n>>>1;
            // System.out.println(n);
        }
        return result;

        // int result = 0;
        // int flag = 1;
        // while(n != 0){
        //     result += n & flag;
        //     n >>>= 1;
        //      System.out.println(n);
        // }
        // return result;
    }
}