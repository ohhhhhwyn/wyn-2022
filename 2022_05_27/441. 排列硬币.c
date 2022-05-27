int arrangeCoins(int n){
    int left = 1;
    int right = n;
    while(left <= right)
    {
        long mid = left + ((right - left) >> 1);
        if(n < mid * (mid + 1) / 2)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return (int)right;
}