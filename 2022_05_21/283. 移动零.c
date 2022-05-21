void moveZeroes(int* nums, int numsSize){
    int slow = 0;
    int fast = 0;
    while(fast < numsSize)
    {
        if(0 != nums[fast])
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    while(slow < numsSize)
    {
        nums[slow++] = 0;
    }
}