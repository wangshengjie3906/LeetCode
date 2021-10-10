class Solution {
    public int missingNumber(int[] nums) {
    
        //数学方法求解

        int sum = 0;
        int temp = 0;
        for(int i = 0; i < nums.length; i++)
        {
            sum += nums[i];
            temp += i;
        }

        temp += nums.length;

        if((temp - sum) == 0)
        {
            return 0;
        }
        else
        {
            return temp - sum;
        }
    }
}