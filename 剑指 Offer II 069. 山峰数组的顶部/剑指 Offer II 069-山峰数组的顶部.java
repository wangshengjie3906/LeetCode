class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int left = 1;//不能从第一个，第二个开始
        int right = arr.length - 2;//不能从最后一个，倒数第二个
        int ans = 0;
        int mid = 0;
        while (left <= right)//有等于
        {
            mid = (left + right) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
}