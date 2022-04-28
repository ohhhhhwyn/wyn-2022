int missingNumber(int* nums, int numsSize){
    int k = 0;
    for(int i = 0; i <= numsSize; i++)
    {
        if(i < numsSize)
        {
            k ^= nums[i];
        }
        k ^= i;
    }
    return k;
}