#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int my_pow(int num, int n)
//{
//	int ret = 1;
//	for (int i = 0; i < n; ++i)
//	{
//		ret *= num;
//	}
//	return ret;
//}
//int flower(int num, int n)
//{
//	int tmp = num;
//	int sum = 0;
//	while (tmp)
//	{
//
//		sum += my_pow((tmp % 10), n);
//		tmp /= 10;
//	}
//	if (sum == num)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 0; i < 100000; ++i)
//	{
//		if (i >= 0 && i < 10)
//		{
//			if (flower(i, 1))
//			{
//				printf("%d ", i);
//			}
//		}
//		else if (i >= 10 && i < 100)
//		{
//			if (flower(i, 2))
//			{
//				printf("%d ", i);
//			}
//		}
//		else if (i >= 100 && i < 1000)
//		{
//			if (flower(i, 3))
//			{
//				printf("%d ", i);
//			}
//		}
//		else if (i >= 1000 && i < 10000)
//		{
//			if (flower(i, 4))
//			{
//				printf("%d ", i);
//			}
//		}
//		else
//		{
//			if (flower(i, 5))
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 1; i <= n + 1; ++i)
//		{
//			for (int j = i; j <= n; ++j)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < 2 * i - 1; ++k)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 1; i <= n; ++i)
//		{
//			for (int j = 0; j < i; ++j)
//			{
//				printf(" ");
//			}
//			for (int k = 0; k < 2 * n - (2 * i - 1); ++k)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}