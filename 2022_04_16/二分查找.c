#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
	int left = 0, right = numsSize - 1;
	while (left <= right) {
		int mid = ((right - left) >> 1) + left;
		if (nums[mid] < target) 
			left = mid + 1;
		else if (nums[mid] > target) 
			right = mid - 1;
		else 
			return mid;
	}
	return -1;
}
int main() {
	int target;
	scanf("%d", &target);
	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret = searchInsert(nums, numsSize, target);
	if (-1 == ret)
		printf("找不到\n");
	else 
		printf("%d", ret);
	return 0;
}



























