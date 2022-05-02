#include<stdio.h>
void array_swap(int* nums_A, int* nums_B, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		int tmp = nums_A[i];
		nums_A[i] = nums_B[i];
		nums_B[i] = tmp;
	}
}
int main()
{
	int array_A[5] = { 0,1,2,3,4 };
	int array_B[5] = { 5,6,7,8,9 };
	printf("Before:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array_A[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array_B[i]);
	}
	printf("\n");
	array_swap(array_A, array_B, 5);
	printf("After :\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array_A[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", array_B[i]);
	}
	printf("\n");
	return 0;
}