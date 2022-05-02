#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Bubble_Sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] < nums[j + 1])
//			{
//				int tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int array[10] = { 9,5,7,2,1,6,8,4,3,0 };
//	int array_size = sizeof(array) / sizeof(array[0]);
//	Bubble_Sort(array,array_size);
//	for (int i = 0; i < array_size; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void array_init(int* nums,int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		nums[i] = i;
//	}
//}
//void array_print(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//}
//void array_reverse(int* nums, int numsSize)
//{
//	int left = 0, right = numsSize - 1;
//	while (left < right)
//	{
//		int tmp = nums[left];
//		nums[left++] = nums[right];
//		nums[right--] = tmp;
//	}
//}
//int main()
//{
//	int array[10] = { 0 };
//	int array_size = sizeof(array) / sizeof(array[0]);
//	array_init(array, array_size);
//	array_print(array, array_size);
//	printf("\n");
//	array_reverse(array, array_size);
//	array_print(array, array_size);
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//void array_swap(int* nums_A, int* nums_B, int numsSize)
//{
//	for (int i = 0; i < numsSize; i++)
//	{
//		int tmp = nums_A[i];
//		nums_A[i] = nums_B[i];
//		nums_B[i] = tmp;
//	}
//}
//int main()
//{
//	int array_A[5] = { 0,1,2,3,4 };
//	int array_B[5] = { 5,6,7,8,9 };
//	printf("Before:\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", array_A[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", array_B[i]);
//	}
//	printf("\n");
//	array_swap(array_A, array_B, 5);
//	printf("After :\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", array_A[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", array_B[i]);
//	}
//	printf("\n");
//	return 0;
//}