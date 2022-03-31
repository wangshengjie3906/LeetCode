class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
            Set<Integer> set = new HashSet<>();
            Arrays.sort(nums2);

            int left;
            int right;
            int mid;

            for(int i = 0; i < nums1.length; i++)
            {
                left = 0;
                right = nums2.length - 1;
                
                while(left <= right)
                {
                    mid = left + (right - left) / 2;
                    if(nums2[mid] == nums1[i])
                    {
                        set.add(nums1[i]);
                        break;
                    }
                    else if(nums2[mid] > nums1[i])
                    {
                        right = mid - 1;
                    }
                    else
                    {
                        left = mid + 1;
                    }
                }
            }

            int index = 0;
            int[] res = new int[set.size()];
            for(int num : set)
            {
                res[index++] = num;
            }

            return res;
    }
}