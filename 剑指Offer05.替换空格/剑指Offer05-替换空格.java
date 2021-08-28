class Solution {
    public String replaceSpace(String s) {
        String temp = s.replaceAll(" ","%20");
        return temp;
    }
}