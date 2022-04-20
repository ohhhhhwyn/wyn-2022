bool containsDuplicate(int* nums, int numsSize){
    //方法一，暴力算法,超出时间限制
    /*
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j])
                return true;
        }
    }
    return false;
    */
    //方法二，排序
    //选择排序，超出时间限制
    /*
    for(int i=0;i<numsSize-1;i++){
        int MinIndex=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[MinIndex]>nums[j])
                MinIndex=j;
        }
        int tmp=nums[MinIndex];
        nums[MinIndex]=nums[i];
        nums[i]=tmp;
    }
    */
    //快速排序，不超出时间限制
    int cmp(const void* _a, const void* _b) {
        int a = *(int*)_a, b = *(int*)_b;
        return a - b;
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1])
            return true;
    }
    return false;
}