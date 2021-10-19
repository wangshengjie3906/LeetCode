class Solution {
    public int[] searchRange(int[] nums, int target) {
        int res[] = new int[2];
        res[0] = -1;
        res[1] = -1;
        if(nums.length == 0)//判断空数组
        {
            return res;
        }

        //暴力解法
        int left = 0;
        for(int i = 0; i < nums.length; i++)
        {
            if(nums[i] == target)//第一个相等的位置
            {
                if(i == nums.length - 1)
                {
                    res[1] = i;
                }
                if(left == 1)
                {
                    continue;
                }
                left = 1;
                res[0] = i;
                continue;
            }

            //不等的时候，有序数组后面都不等
            if(left == 1)
            {
                res[1] = i - 1;
                break;
            }
        }

        return res;
    }
}