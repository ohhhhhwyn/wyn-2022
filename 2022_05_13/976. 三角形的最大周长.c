int cmp(void* _a, void* _b)
{
    return (*(int*)_a - *(int*)_b);
}
int largestPerimeter(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = numsSize - 1; i > 1; --i)
    {
        if(nums[i - 2] + nums[i - 1] > nums[i])
        {
            return (nums[i - 2] + nums[i - 1] + nums[i]);
        }
    }
    return 0;
}