#include<stdio.h>
void Bubble_Sort(int* nums, int numsSize)
{
	for (int i = 0; i < numsSize - 1; i++)
	{
		for (int j = 0; j < numsSize - 1 - i; j++)
		{
			if (nums[j] < nums[j + 1])
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
	int array[10] = { 9,5,7,2,1,6,8,4,3,0 };
	int array_size = sizeof(array) / sizeof(array[0]);
	Bubble_Sort(array,array_size);
	for (int i = 0; i < array_size; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}