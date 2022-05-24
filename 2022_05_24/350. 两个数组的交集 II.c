/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* _a, const void* _b)
{
    return (*(int*)_a - *(int*)_b);
}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    *returnSize = 0;
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int* ans = (int*)malloc(sizeof(int) * fmin(nums1Size, nums2Size));
    int index1 = 0, index2 = 0;
    while(index1 < nums1Size && index2 < nums2Size)
    {
        if(nums1[index1] < nums2[index2])
        {
            ++index1;
        }
        else if(nums2[index2] < nums1[index1])
        {
            ++index2;
        }
        else
        {
            ans[(*returnSize)++] = nums1[index1];
            ++index1;
            ++index2;
        }
    }
    return ans;
}