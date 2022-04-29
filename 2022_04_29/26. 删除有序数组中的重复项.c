int removeDuplicates(int* nums, int numsSize){
    int fast = 1, slow = 1;
    while(fast < numsSize)
    {
        if(nums[fast - 1] != nums[fast])
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}