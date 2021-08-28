class Solution {
    public int minArray(int[] numbers) {
        int result = numbers[0];
        for(int i: numbers){
            if(result > i){
                result = i;
            }
        }
        return result;
    }
}