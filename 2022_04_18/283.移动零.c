void moveZeroes(int* nums, int numsSize){
    int fast=0,slow=0;
    for(fast=0;fast<numsSize;fast++){
        if(nums[fast]!=0){
            nums[slow++]=nums[fast];
        }
    }
    for(int i=slow;i<numsSize;i++){
        nums[i]=0;
    }
}