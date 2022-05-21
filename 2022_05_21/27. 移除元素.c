int removeElement(int* nums, int numsSize, int val){
    int slow = 0;
    int fast = 0;
    while(fast < numsSize)
    {
        if(val != nums[fast])
        {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}