int arraySign(int nums, int numsSize){
	/*
    int negative = 0;
    for(int i = 0; i  numsSize; ++i)
    {
        if(nums[i] == 0)
        {
            return 0;
        }
        else if(nums[i]  0)
        {
            ++negative;
        }
    }
    if(negative % 2 == 0)
    {
        return 1;
    }
    return -1;
    */
    int ret = 1;
    for(int i = 0; i  numsSize; ++i)
    {
        if(nums[i] == 0)
        {
            return 0;
        }
        else if(nums[i]  0)
        {
            ret = -1;
        }
    }
    return ret;
}