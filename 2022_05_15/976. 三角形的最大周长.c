int cmp(void* _a, void* _b)
{
    int a = *(int *)_a, b = *(int *)_b;
    return a - b;
}
int largestPerimeter(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = numsSize - 1; i >= 2; --i)
    {
        if((nums[i - 2] + nums[i - 1]) > nums[i])
        {
            return nums[i - 2] + nums[i - 1] + nums[i];
        }
    }
    return 0;
}