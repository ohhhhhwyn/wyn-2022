int mySqrt(int x){
    /*long long i = 0;
    for(i = 0; i < x; ++i)
    {
        if(i * i <= x && (i + 1) * (i + 1) > x)
        {
            break;
        }
    }
    return i;*/
    int left = 1;
    int right = x;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(x < (long)mid * mid){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return right;
}