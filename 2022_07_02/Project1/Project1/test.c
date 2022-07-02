#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    *returnSize = 0;
    int* ans = (int*)malloc(sizeof(int) * numsSize);
    for (int i = 1; i <= numsSize; i++) {
        int flag = 1;
        for (int j = 0; j < numsSize; j++) {
            if (i == nums[j]) {
                flag = 0;
            }
        }
        if (flag) {
            ans[(*returnSize)++] = i;
        }
    }
    return ans;
}
int main()
{
    int arr[] = { 4,3,2,7,8,2,3,1 };
    int b[10] = {0};
    int* ans = findDisappearedNumbers(arr, sizeof(arr) / sizeof(arr[0]), b);
	return 0;
}