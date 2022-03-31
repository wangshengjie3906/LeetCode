class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        if(nums1.length <= nums2.length)
        {
            return binarryProcess(nums1, nums2);
        }
        else
        {
            return binarryProcess(nums2, nums1);
        }
    }

    public int[] binarryProcess(int[] nums1, int[] nums2)
    {
        List<Integer> list = new ArrayList<>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);

/*
        int left;
        int right;
        int mid;
        int[] flag = new int[nums2.length];

        for(int i = 0; i < nums1.length; i++)
        {
            left = 0;
            right = nums2.length - 1;
            
            while(left <= right)
            {
                mid = left + (right - left) / 2;
                if(nums2[mid] == nums1[i])
                {
                    if(flag[i] == 0)
                    {
                        list.add(nums1[i]);
                        flag[i] = 1;
                        break;
                    }
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
*/
        int i = 0;
        int j = 0;
        while(i < nums1.length)
        {
            if(nums1[i] == nums2[j])
            {
                list.add(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }

            if(j >= nums2.length)
            {
                break;
            }
        }
        int index = 0;
        int[] res = new int[list.size()];
        for(int num : list)
        {
            res[index++] = num;
        }

        return res;
    }
}