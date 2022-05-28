int cmp(const void* _a, const void* _b){
    return (*(int*)_a - *(int*)_b);
}
int specialArray(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = 0; i < numsSize; i++){
        if(numsSize - i <= nums[i]){
            if(!i || nums[i - 1] < numsSize - i){
                return numsSize - i;
            }
        }
    }
    return -1;
}