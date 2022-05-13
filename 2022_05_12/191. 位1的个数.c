int hammingWeight(uint32_t n) {
    //方法一：遍历每一位是否 == 1，循环次数是32
    /*
    int count = 0;
    for(int i = 0; i < 32; ++i)
    {
        if((n >> i) & 1 )
        {
            ++count;
        }
    }
    return count;
    */
    //方法三：遍历每一位 & 1，把结果加起来，循环次数32
    /*
    int sum = 0;
    while(n)
    {
        sum += n & 1;
        n >>= 1;
    }
    return sum;
    */
    //方法三：n & (n - 1)会把n最低位的1变成0，循环次数是1的个数
    int count = 0;
    while(n)
    {
        n &= n - 1;
        ++count;
    }
    return count;
}