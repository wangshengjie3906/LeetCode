class Solution {
    public int[] singleNumbers(int[] nums) {
        int sum = 0;
        for(int item: nums){
            sum = sum ^ item;
        }

        int flag = 1;

        while((sum & flag) == 0){
            flag = flag<<1;
        }

        int a = 0;
        int b = 0;

        for(int item: nums){
            if((item&flag) == 0){
                a = a ^ item;
            }
            else{
                b = b ^ item;
            }
        }

        return new int[]{a,b};
    }
}