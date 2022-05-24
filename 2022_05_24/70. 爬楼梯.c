int climbStairs(int n){
    int prev = 1;
    int curr = 1;
    int ans = 1;
    for(int i = 2; i <= n; ++i)
    {
        ans = curr + prev;
        prev = curr;
        curr = ans;
    }
    return ans;
}