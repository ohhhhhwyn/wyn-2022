int removeElement(int* nums, int numsSize, int val){
    if(0==numsSize)
        return 0;
    int fast=0,slow=0;
    while(fast<numsSize){
        if(nums[fast]!=val){
            nums[slow]=nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}  