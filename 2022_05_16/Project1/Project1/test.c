#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}
//演示实例
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = &arr[0];
//	while (p <= &arr[4])
//	{
//		*p = 1;
//		printf("%d ", *p);
//		++p;
//	}
//	printf("\n");
//	while (p > &arr[0])
//	{
//		--p;
//		*p = 2;
//		printf("%d ", *p);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	int* phead = &arr[0];
//	int* ptail = &arr[4];
//	printf("%d\n", ptail - phead);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 0 };
//	for (int* p = &arr[5]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	for (int* p = &arr[4]; p >= &arr[0]; --p)
//	{
//		*p = 0;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int* p = arr;
//	for (int i = 0; i < 10; ++i)
//	{
//		printf("%d %d %d\n", arr[i], *(p + i), *(arr + i));
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* string)
//{
//	assert(string);
//	int sum = 0;
//	while (*string++)
//	{
//		++sum;
//	}
//	return sum;
//}
//int main()
//{
//	char* str = "hello world!";
//	int length = my_strlen(str);
//	printf("%d\n", length);
//	return 0;
//}
//#include <stdio.h>
//#include <assert.h>
//char* my_strcpy(char* strDestination, const char* strSource)
//{
//	assert(strDestination);
//	assert(strSource);
//	char* result = strDestination;
//	while (*strDestination++ = *strSource++)
//	{
//		;
//	}
//	return result;
//}
//int main()
//{
//	char dest[20];
//	char* src = "hello world!";
//	printf("%s\n", my_strcpy(dest, src));
//	return 0;
//}
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



























