int singleNumber(int* nums, int numsSize){
    int res = 0, bit = 0;
    for(int i = 31; i >= 0; --i)
    {
        for(int j = 0; j < numsSize; ++j)
        {
            bit += nums[j] >> i & 1;
        }
        res = (res << 1) + bit % 3;
        bit = 0;
    }
    /*
    for(int i = 0; i < 32; ++i)
    {
        for(int j = 0; j < numsSize; ++j)
        {
            bit += nums[j] >> i & 1;
        }
        if(bit % 3 == 1)
        {
            res = res | ((unsigned int)1 << i);//有符号的变化，未解决
        }
    }
    */
    return res;
}