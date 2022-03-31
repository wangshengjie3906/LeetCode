class Solution {
    public int[] sortedSquares(int[] nums) {
    //     for (int i = 0; i < nums.length; i++)
    //     {
    //         nums[i] = nums[i] * nums[i];
    //     }
    //     Arrays.sort(nums);
    //     return nums;
    // }

    // 双指针
    if (nums.length == 0)
    {
        return nums;
    }
    
    int[] res = new int[nums.length];
    for (int left = 0, right = nums.length - 1, temp = nums.length - 1; left <= right; )
    {
        // 非递减，但是可能有负数，先取平方
        if (nums[left] * nums[left] > nums[right] * nums[right])
        {
            res[temp] = nums[left] * nums[left];
            left++;
        }
        else
        {
            res[temp] = nums[right] * nums[right];
            right--;
        }

        temp--;
    }

    return res;
    }
}