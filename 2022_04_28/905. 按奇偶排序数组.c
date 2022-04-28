/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int* ret = (int*) malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int i = 0, j = 0, k = numsSize - 1;
    while(i < numsSize)
    {
        if(nums[i] % 2 == 0)
        {
            ret[j] = nums[i];
            j++;
        }
        else
        {
            ret[k] = nums[i];
            k--;
        }
        i++;
    }
    return ret;
}