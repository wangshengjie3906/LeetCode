class Solution {
    public int[] exchange(int[] nums) {
        // 1 双指针
        int r = 0;
        int l = nums.length - 1;
        int temp = 0;
        while(r < l){
            while((nums[r] & 1) != 0){
                r++;
                if(r == l){
                    return nums;
                }
            }
            while((nums[l] & 1) != 1){
                l--;
                 if(r == l){
                    return nums;
                }
            }

            temp = nums[r];
            nums[r++] = nums[l];
            nums[l--] = temp;
        }
        return nums;

        // 2 位运算方法和双指针
        // int r = 0;
        // int l = nums.length - 1;
        // int[] result = new int[nums.length];
        // for(int item: nums){
        //     if((item & 1) == 0){
        //         result[l--] = item;
        //     }
        //     else{
        //         result[r++] = item;
        //     }
        // }
        // return result;

        // 3 位运算，遍历两次，一次奇数入，第二次偶数入
        // int i = 0;
        // int[] result = new int[nums.length];
        // for(int item: nums){
        //     if((item & 1) != 0){
        //         result[i++] = item;
        //     }
        // }
        
        // for(int item: nums){
        //     if((item & 1) == 0){
        //         result[i++] = item;
        //     }
        // }
        // return result;
    }
}