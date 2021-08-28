class Solution {
    public char firstUniqChar(String s) {
        // 1, 使用哈希表计数
        // Map<Character, Boolean> map = new HashMap<>();
        // char[] temp = s.toCharArray();
        // for(char c: temp){
        //     map.put(c, !map.containsKey(c));
        // }
        // for(char c: temp){
        //     if(map.get(c)){
        //         return c;
        //     }
        // }

        // return ' ';


        // 2, 使用数组计数
        int[] t = new int[26];
        for(int i: t){
            i = 0;
        }
        char[] temp = s.toCharArray();
        for(char c: temp){
            t[c - 'a']++;
        }
        for(char c: temp){
            if(t[c - 'a'] == 1){
                return c;
            }
        }

        return ' ';
    }
}