// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    if (n == 1)
    {
        return 1;
    }

    int left = 1;
    int right = n;
    int middle = 1;

    while (left < right)
    {
        middle = left + (right - left) / 2;// 注意可能会溢出的情况
        if (isBadVersion(middle))
        {
            right = middle;
        }
        else
        {
            left = middle + 1;
        }
    }

    return left;
}