class Solution {
    public String toLowerCase(String s) {
        /*
        String res = s.toLowerCase();
        return res;
        */

        if (s == null && "".equals(s))
        {
            return null;
        }
        
        StringBuilder res = new StringBuilder();
        for (char c : s.toCharArray())
        {
            if (c >= 'A' && c <= 'Z')
            {
                //res.append((char)(c + 32));//方法 1
                res.append((char)(c ^ 32));//方法 2
            } 
            else
            {
                res.append(c);
            }
        }
        
        return res.toString();
    }
}