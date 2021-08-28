class Solution {
    public boolean isPalindrome(int x) {
        int i =0;
        if(x<0){
            return false;
        }
        int temp = x;
        while(temp != 0){
            temp /= 10;
            i++;
        }
        int[] num = new int[i];
        temp = x;
        i = 0;
        while(temp != 0){
            num[i] = temp%10;
            temp /= 10;
            i++;
        }
        for(i = 0;i<num.length/2;i++){
            if(num[i]!=num[num.length-1-i]){
                return false;
            }
        }
        return true;
    }
}