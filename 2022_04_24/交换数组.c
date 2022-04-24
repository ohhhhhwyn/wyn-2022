#include<stdio.h>
void Swap(int* p1, int len1, int* p2, int len2)
{
	int tmp = 0;
	int i = 0;
	for (int i = 0; i < len1 || i < len2;i++)
	{
		tmp = *p1;
		*p1++ = *p2;
		*p2++ = tmp;
	}
}
int main()
{
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	Swap(arr1, len1, arr2, len2);
	for (int i = 0; i < len1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < len2; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}