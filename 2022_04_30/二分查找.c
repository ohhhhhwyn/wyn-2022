#include<stdio.h>
int main()
{
	int val = 0;
	scanf("%d", &val);
	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int left = 0;
	int right = numsSize - 1;
	while (left <= right)
	{
		int mid = left + ((right - left) >> 1);
		if (val < nums[mid])
		{
			right = mid - 1;
		}
		else if (val > nums[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	return 0;
}