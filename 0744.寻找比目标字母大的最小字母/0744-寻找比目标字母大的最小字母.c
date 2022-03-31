char nextGreatestLetter(char* letters, int lettersSize, char target){
    if(target >= letters[lettersSize - 1])
    {
        return letters[0];
    }

    int left = 0;
    int right = lettersSize - 1;
    int mid;
    char res = ' ';

    while(left <= right)
    {
        mid = left + ((right - left) >> 2);
        if(letters[mid] > target)
        {
            res = letters[mid];
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return res;
}