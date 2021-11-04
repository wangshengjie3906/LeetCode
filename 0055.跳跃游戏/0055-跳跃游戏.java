class Solution {
    public boolean canJump(int[] nums) {
        int right = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(i <= right)
            {
                right = right > (i + nums[i]) ? right : (i + nums[i]);
                if(right >= nums.length - 1)
                {
                    return true;
                }
            }
        }
        return false;
    }
}