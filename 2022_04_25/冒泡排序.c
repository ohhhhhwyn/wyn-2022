#include<stdio.h>
void Bubble_sort(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = 0; j < numsSize - 1 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int nums[] = { 9,8,7,6,5,4,3,2,1 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	printf("排序前：\n");
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	Bubble_sort(nums, numsSize);
	printf("\n排序后：\n");
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}