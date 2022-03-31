class Solution {
    public int[] sortedSquares(int[] nums) {
    //     for (int i = 0; i < nums.length; i++)
    //     {
    //         nums[i] = nums[i] * nums[i];
    //     }
    //     Arrays.sort(nums);
    //     return nums;
    // }

    // ˫ָ��
    if (nums.length == 0)
    {
        return nums;
    }
    
    int[] res = new int[nums.length];
    for (int left = 0, right = nums.length - 1, temp = nums.length - 1; left <= right; )
    {
        // �ǵݼ������ǿ����и�������ȡƽ��
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