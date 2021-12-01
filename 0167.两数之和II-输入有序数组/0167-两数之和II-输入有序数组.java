class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int left = 0;
        int rigth = numbers.length - 1;
        while((numbers[left] + numbers[rigth]) != target)
        {
            if((numbers[left] + numbers[rigth]) < target)
            {
                left++;
            }
            else
            {
                rigth--;
            }
        }

        int res[] = new int[2];
        res[0] = left + 1;
        res[1] = rigth + 1;
        return res;
    }
}