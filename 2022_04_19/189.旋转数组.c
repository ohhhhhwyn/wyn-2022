void reserve(int* nums, int left , int right){
    while(left<=right)
    {
        int tmp = nums[left];
        nums[left++] = nums[right];
        nums[right--] = tmp;
    }
}
void rotate(int* nums, int numsSize, int k){
    //方法一，创建临时数组
    /*
    int tmp[numsSize];
    //将原数组的元素放入临时数组
    for(int i = 0; i < numsSize; i++)
    {
        tmp[i] = nums[i];
    }
    //将临时数组的元素以轮转后的顺序放入原数组
    for(int i = 0; i < numsSize; i++)
    {
        nums[(i+k)%numsSize] = tmp[i];
    }
    */
    //方法二，逆置三次
    k %= numsSize;
    reserve(nums, 0, numsSize-1);
    reserve(nums, 0, k-1);
    reserve(nums, k, numsSize-1);
}