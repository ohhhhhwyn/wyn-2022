void moveZeroes(int* nums, int numsSize){
    int fast = 0;
    int slow = 0;
    while(fast < numsSize)
    {
        if(nums[fast] != 0)
        {
            nums[slow++] = nums[fast];
        }
        ++fast;
    }
    while(slow < numsSize)
    {
        nums[slow++] = 0;
    }
}