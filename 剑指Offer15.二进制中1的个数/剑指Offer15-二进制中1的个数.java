public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int result = 0;
        int flag = 1;
        while(n != 0){
            result = result + (n & flag); // ������ȷ
            //result = result + n & flag; //�������
            // �����֮������ȼ�!
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