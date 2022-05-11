/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 //方法一：暴力查找法，没超出时间限制

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1;
    ans[1] = -1;
    int begin = 0;
    int end = 0;
    for(int i = 0; i < numsSize; ++i)
    {
        if(target == nums[i])
        {
            ans[0] = i;
            ans[1] = i;
            for(int j = i; j < numsSize; ++j)
            {
                if(target == nums[j])
                {
                    ans[1] = j;
                }
                else
                {
                    break;
                }
            }
            break;
        }
    }
    return ans;
}
//方法二：二分查找法,超出时间限制
/*
int binarySearch(int* nums, int numsSize, int target, bool lower)
{
    int left = 0;
    int right = numsSize - 1;
    int ret = 0;
    while(left <= right)
    {
        int mid = left + (right - left) >> 1;
        if((target < nums[mid]) || (lower && (target <= nums[mid])))
        {
            right = mid - 1;
            ret = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return ret;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1;
    ans[1] = -1;
    int leftIdx = binarySearch(nums, numsSize, target, true);
    int rightIdx = binarySearch(nums, numsSize, target, false) -1;
    if((leftIdx <= rightIdx) 
    && (leftIdx >= 0) 
    && (rightIdx < numsSize) 
    && (nums[leftIdx] == target)
    && (nums[rightIdx] == target))
    {
        ans[0] = leftIdx;
        ans[1] = rightIdx;
    }
    return ans;
}
*/