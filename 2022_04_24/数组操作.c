#include<stdio.h>
void init(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int size)
{
	int* left = arr;
	int* right = arr + size - 1;
	while (left < right)
	{
		int tmp = *left;
		*left++ = *right;
		*right-- = tmp;
	}
}
int main()
{
	int arr[10];
	init(arr, 10);
	print(arr, 10);
	reverse(arr, 10);
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}