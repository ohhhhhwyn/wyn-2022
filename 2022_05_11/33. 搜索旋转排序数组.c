int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    while(left <= right)
    {
        int mid = left + ((right - left) >> 1);
        if(nums[mid] == target) 
        {
            return mid;
        }
        //右边有序
        if(nums[mid] < nums[right])
        {
            if(target > nums[mid] && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        //左边有序
        else
        {
            if(target >= nums[left] && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }   
    return -1;
}