class Solution {
    public int majorityElement(int[] nums) {
        /*ͶƱ�㷨*/
        int candidate = -1;
        int count = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] == candidate)
            {
                ++count;
            }
            else if(--count < 0)
            {
                candidate = nums[i];
                count = 1;
            }
        }
    
        return candidate;
    }
}