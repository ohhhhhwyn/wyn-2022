// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int left = 0;
    int right = n;
    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(isBadVersion(mid))
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}