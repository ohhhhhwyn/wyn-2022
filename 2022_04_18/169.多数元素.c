int majorityElement(int* nums, int numsSize){
    //方法一，暴力算法,超出时间限制
    /*
    int max = INT_MIN;
    int ret;
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && i != j) {
                count++;
            }
            if (max < count) {
                max = count;
                ret = nums[i];
            }
        }
    }
    return ret;
    */
    //方法二，排序,选择排序，超出时间限制
    /*
    for (int i = 0; i < numsSize - 1; i++) {
        int MinIndex = i;
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[MinIndex] > nums[j])
                MinIndex = j;
        }
        int tmp = nums[MinIndex];
        nums[MinIndex] = nums[i];
        nums[i] = tmp;
    }
    return nums[numsSize/2];
    */
    int cmp(const void *_a,const void *_b){
        return(*(int*)_a-*(int*)_b);
    }
    qsort(nums,numsSize,sizeof(int),cmp);
    return nums[numsSize/2];
}