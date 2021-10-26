class Solution {
    public String convertToTitle(int columnNumber) {
        if (columnNumber <= 0)
        {
            return "";
        }

        StringBuilder sb = new StringBuilder();

        while (columnNumber > 0)
        {
            columnNumber--;//转化为标准 26 进制
            sb.append((char) (columnNumber % 26 + 'A'));
            columnNumber /= 26;
        }

        return sb.reverse().toString();
    }
}