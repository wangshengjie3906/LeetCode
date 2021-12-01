/*void swap(int *a, int *b) {
    int t = *a;
    *a = *b, *b = t;
}

void moveZeroes(int *nums, int numsSize) {
    int left = 0, right = 0;
    while (right < numsSize) {
        if (nums[right]) {
            swap(nums + left, nums + right);
            left++;
        }
        right++;
    }
}
*/

void moveZeroes(int *nums, int numsSize) {
    int index = 0;;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[index] = nums[i];
            index++;
        }
    }
    for (int i = index; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}