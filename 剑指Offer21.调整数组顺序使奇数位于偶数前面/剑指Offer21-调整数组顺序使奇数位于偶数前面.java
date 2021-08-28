class Solution {
    public int[] exchange(int[] nums) {
        // 1 ˫ָ��
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

        // 2 λ���㷽����˫ָ��
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

        // 3 λ���㣬�������Σ�һ�������룬�ڶ���ż����
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