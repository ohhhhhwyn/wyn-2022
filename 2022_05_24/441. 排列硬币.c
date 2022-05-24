int arrangeCoins(int n){
    int left = 1;
    int right = n;
    while(left <= right)
    {
        long mid = left + ((right - left) >> 1);
        long total = mid * (mid + 1) / 2;
        if(n < total)
        {
            right = mid - 1;
        }
        else if(n > total)
        {
            left = mid + 1;
        }
        else
        {
            return (int)mid;
        }
    }
    return (int)right;
}