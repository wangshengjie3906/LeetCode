class Solution {
    public boolean findNumberIn2DArray(int[][] matrix, int target) {
        if(matrix.length == 0){
            return false;
        }
        int left;
        int right;
        int middle;
        for(int[] item: matrix){
            left = 0;
            right = item.length - 1;
            while(left <= right){
                middle = left + (right - left) / 2;
                if(item[middle] == target){
                    return true;
                }
                else if(item[middle] < target){
                    left = middle + 1;
                }
                else{
                    right = middle - 1;
                }
            }
        }
        return false;
    }
}