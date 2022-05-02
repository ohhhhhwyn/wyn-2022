/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize){
    int ret = 0;
    for(int i = 0; i < numsSize; ++i)
    {
        ret ^= nums[i];
    }
    int j = 0;
    while(j < 32)
    {
        if((ret>>j) & 1)//ret & (1<<j) int型1不能左移
        {
            break;
        }
        ++j;
    }
    int ret1 = 0, ret2 = 0;
    for(int k = 0; k < numsSize; ++k)
    {
        if((nums[k]>>j) & 1)
        {
            ret1 ^= nums[k]; 
        }
        else
        {
            ret2 ^= nums[k];
        }
    }
    *returnSize = 2;
    int* arr = (int*)malloc(sizeof(int) * 2);
    arr[0] = ret1;
    arr[1] = ret2;
    return arr;
}