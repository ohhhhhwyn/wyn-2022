/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
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
}