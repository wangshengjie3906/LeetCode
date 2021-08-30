class Solution {
    public int maxArea(int[] height) {
        if(height.length < 2)
        {
            return 0;
        }
        int temp = 0;
        int max = 0;;
        int left = 0;
        int right = height.length - 1;
        while(left < right)
        {
            temp = (right - left) * (height[left] < height[right] ? height[left] : height[right]);
            max = (temp > max ? temp : max);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max;
    }
}