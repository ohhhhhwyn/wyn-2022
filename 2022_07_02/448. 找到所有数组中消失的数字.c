/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    *returnSize = 0;
    int* ans = (int*)malloc(sizeof(int) * numsSize);
    for(int i = 0; i < numsSize; i++){
        int x = (nums[i] - 1) % numsSize;
        nums[x] += numsSize;
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] <= numsSize){
            ans[(*returnSize)++] = i + 1;
        }
    }
    return ans;
}