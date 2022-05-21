/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void *a,const void *b)
{
    return *(int*)a - *(int*)b;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    *returnSize = 0;
    if(numsSize < 3)
        return NULL;
    int **ans = (int **)malloc(sizeof(int *) * numsSize  *numsSize);
    *returnColumnSizes = (int *)malloc(sizeof(int) * numsSize * numsSize);
    qsort(nums,numsSize,sizeof(int),cmp);
    int indexLeft = 0, indexMiddle = 0, indexRight = 0;
    for(indexLeft = 0; indexLeft< numsSize - 2; indexLeft++)
    {
        if(nums[indexLeft] > 0) 
            return ans;
        if(indexLeft > 0 && nums[indexLeft] == nums[indexLeft-1])
            continue;
        indexMiddle = indexLeft + 1;
        indexRight  = numsSize - 1;
        while(indexMiddle < indexRight)
        {
            int sum = nums[indexLeft] + nums[indexMiddle] + nums[indexRight];
            if(0 > sum)
                while(indexMiddle < indexRight && nums[indexMiddle] == nums[++indexMiddle]);
            else if(0 < sum)
                while(indexMiddle < indexRight && nums[indexRight] == nums[--indexRight]);
            else
            {
                ans[*returnSize] = (int*)malloc(sizeof(int)*3);
                (*returnColumnSizes)[*returnSize] = 3;
                ans[*returnSize][0] = nums[indexLeft];
                ans[*returnSize][1] = nums[indexMiddle];
                ans[*returnSize][2] = nums[indexRight];
                *returnSize += 1;
                while(indexMiddle < indexRight && nums[indexMiddle] == nums[++indexMiddle]);
                while(indexMiddle < indexRight && nums[indexRight] == nums[--indexRight]);
            }
        }
    }
    return ans;
}
