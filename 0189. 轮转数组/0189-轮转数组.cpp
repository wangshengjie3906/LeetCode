class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int left = 0;
        int right = left + k;
        int temp[nums.size()]; 
        for(left = 0; left < nums.size(); left++)
        {
            temp[right % nums.size()] = nums[left];
            right++;
        }
        for(int i = 0; i <nums.size(); i++)
        {
            nums[i] = temp[i];
        }
        return;
    }
};