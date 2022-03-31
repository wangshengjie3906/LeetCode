class Solution {
    public boolean isPerfectSquare(int num) {
        int left = 1;
        int right = num;
        int mid;

        while(left <= right)
        {
            mid = left + (right - left) / 2;
            // ͬʱ��֤���Ժ�������Ϊ 0
            if((num / mid == mid) && (num % mid == 0))
            {
                return true;
            }
            else if(num / mid > mid)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false;
    }
}