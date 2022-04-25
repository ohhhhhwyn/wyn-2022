#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d", strlen(arr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int max, mid, min;
//	max = (a > b ? a : b) > c ? a > b ? a : b : c;
//	min = (a < b ? a : b) < c ? a < b ? a : b : c;
//	mid = a + b + c - max - min;
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}
//#include<stdio.h>
//void Bubble_sort(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = 0; j < numsSize - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
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
//	int nums[] = { 9,8,7,6,5,4,3,2,1 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	printf("≈≈–Ú«∞£∫\n");
//	for (int i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	Bubble_sort(nums, numsSize);
//	printf("\n≈≈–Ú∫Û£∫\n");
//	for (int i = 0; i < numsSize; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int my_strlen(char* nums)
{
	if (nums[0] == '\0')
	{
		return 0;
	}
	return 1 + my_strlen(nums + 1);
}
void reverse_string(char* nums)
{
	int numsSize = my_strlen(nums);
	char tmp = *nums;
	*nums = *(nums + numsSize - 1);
	*(nums + numsSize - 1) = '\0';
	if (my_strlen(nums+1) >= 2)
	{
		reverse_string(nums + 1);
	}
	*(nums + numsSize - 1) = tmp;
}
int main()
{
	char nums[] = "abcdef";
	printf("before:%s\n", nums);
	reverse_string(nums);
	printf("after :%s\n", nums);
	return 0;
}

