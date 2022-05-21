/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    ans[0] = -1;
    ans[1] = -1;
    int left = 0;
    int right = numbersSize - 1;
    while(left < right)
    {
        int mid = numbers[left] + numbers[right];
        if(target < mid)
        {
            --right;
        }
        else if(target > mid)
        {
            ++left;
        }
        else
        {
            ans[0] = left + 1;
            ans[1] = right + 1;
            return ans;
        }
    }
    return ans;
}