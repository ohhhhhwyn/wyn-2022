#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdbool.h>
int binarySearch(int* nums, int numsSize, int target, bool lower) {
    int left = 0;
    int right = numsSize - 1;
    int ans = numsSize;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (target < nums[mid] || (lower && target <= nums[mid])) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* ans = (int*)malloc(sizeof(int) * 2);
    int leftIdx = binarySearch(nums, numsSize, target, true);
    int rightIdx = binarySearch(nums, numsSize, target, false) - 1;
    if (leftIdx <= rightIdx && rightIdx < numsSize && nums[leftIdx] == target && nums[rightIdx] == target) {
        ans[0] = leftIdx;
        ans[1] = rightIdx;
        return ans;
    }
    ans[0] = -1;
    ans[1] = -1;
    return ans;
}
int main()
{
    int arr[] = { 5,7,7,8,8,10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    searchRange(arr,size,8,arr);
	system("pause");
	return 0;
}