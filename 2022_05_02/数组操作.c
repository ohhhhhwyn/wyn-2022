#include<stdio.h>
void array_init(int* nums,int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		nums[i] = i;
	}
}
void array_print(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
}
void array_reverse(int* nums, int numsSize)
{
	int left = 0, right = numsSize - 1;
	while (left < right)
	{
		int tmp = nums[left];
		nums[left++] = nums[right];
		nums[right--] = tmp;
	}
}
int main()
{
	int array[10] = { 0 };
	int array_size = sizeof(array) / sizeof(array[0]);
	array_init(array, array_size);
	array_print(array, array_size);
	printf("\n");
	array_reverse(array, array_size);
	array_print(array, array_size);
	printf("\n");
	return 0;
}