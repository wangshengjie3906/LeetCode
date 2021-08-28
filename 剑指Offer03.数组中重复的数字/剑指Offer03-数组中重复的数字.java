import java.util.*;
class Solution {
    public int findRepeatNumber(int[] nums) {
        Set<Integer> temp = new HashSet<>();
        boolean flag = true;
        for(int i: nums){
            flag = temp.add(i);
            if(!flag){
                return i;
            }
        }
        return -1;
    }
}