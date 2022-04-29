void reserve(int *nums, int left, int right)
{
    while(left < right)
    {
        int tmp = nums[left];
        nums[left++] = nums[right];
        nums[right--] = tmp;
    }
}
void rotate(int* nums, int numsSize, int k){
    k %= numsSize;
    reserve(nums, 0, numsSize - 1);
    reserve(nums, 0, k - 1);
    reserve(nums, k, numsSize - 1);
}