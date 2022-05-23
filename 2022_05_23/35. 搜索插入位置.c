int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(target <= nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}