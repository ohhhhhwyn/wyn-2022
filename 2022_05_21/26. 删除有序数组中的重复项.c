int removeDuplicates(int* nums, int numsSize){
    //前置++
    /*
    int slow = 0;
    int fast = 1;
    while(fast < numsSize)
    {
        if(nums[slow] != nums[fast])
        {
            nums[++slow] = nums[fast];
        }
        ++fast;
    }
    return slow + 1;
    */
    //后置++
    int slow = 1;
    int fast = 1;
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