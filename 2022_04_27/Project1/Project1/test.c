#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 6;
//	int nums[] = { 1,2,3,4,5,9 };
//	int del = 4;
//	for (int i = 0; i < n; i++)
//	{
//		if (nums[i] == del)
//		{
//			for (int j = i; j < n - 1; j++)
//			{
//				nums[j] = nums[j + 1];
//			}
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		printf("%d ", nums[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
    for (int i = 10000; i < 100000; i++)
    {
        int sum = 0;
        for (int j = 1; j < 5; j++)
        {
            sum += i % (10 * j) * i / (10 * j);
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}