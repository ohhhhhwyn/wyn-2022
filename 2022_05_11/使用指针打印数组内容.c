#include <stdio.h>
void print(int* p, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	return 0;
}