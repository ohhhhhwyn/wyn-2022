/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int binarySearch(int* nums, int numsSize, int target, bool lower){
    int left = 0;
    int right = numsSize - 1;
    int ans = numsSize;
    while(left <= right){
        int mid = left + ((right - left) >> 1);
        if(target < nums[mid] || (lower && target <= nums[mid])){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return left;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    int leftIdx = binarySearch(nums, numsSize, target, true);
    int rightIdx = binarySearch(nums, numsSize, target, false) - 1;
    if(leftIdx <= rightIdx && rightIdx < numsSize && nums[leftIdx] == target && nums[rightIdx] == target){
        ans[0] = leftIdx;
        ans[1] = rightIdx;
        return ans;
    }
    ans[0] = -1; 
    ans[1] = -1;
    return ans;
    /*
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1;
    ans[1] = -1;
    for(int i = 0; i < numsSize; ++i)
    {
        if(nums[i] == target)
        {
            ans[0] = (ans[0] == -1) ? i : ans[0];
            ans[1] = i;
            if(nums[i] != target)
            {
                break;
            }
        }
    }
    return ans;
    */
}