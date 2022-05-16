#include <stdio.h>
void Adjusttheorder(int* nums, int numsSize)
{
	int left = 0;
	int right = numsSize - 1;
	while (left < right)
	{
		while (nums[left] % 2 != 0)
		{
			++left;
		}
		while (nums[right] % 2 == 0)
		{
			--right;
		}
		if (left < right)
		{
			int tmp = nums[left];
			nums[left] = nums[right];
			nums[right] = tmp;
		}
	}
}
int main()
{
	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	Adjusttheorder(nums, numsSize);
	for (int i = 0; i < numsSize; ++i)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}