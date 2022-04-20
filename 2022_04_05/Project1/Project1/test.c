#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int sum = 0;
//int i = 0;
//int j = 1;
//int Base_conversion(int num)
//{
//	if (num == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		i = num % 10;
//		i *= j;
//		sum += i;
//		num /= 10;
//		j *= 2;
//		Base_conversion(num);
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	Base_conversion(num);
//	int new_num = sum;
//	printf("%d", new_num);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = n; j >1+i; j--)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = n; j > 1 + i; j--)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = n; j > i; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i <= n; i++)
//		{
//			int j;
//			for (j=n;j>i;j--)
//			{
//				printf(" ");
//			}
//			for (j=0;j<=i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = n; j > i; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 0; i <= n; i++)
//		{
//			int j;
//			for (j = n; j >= i; j--)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j;
//			for (j = 0; j <= i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i;
		for (i = 0; i <= n; i++)
		{
			int j;
			for (j=n;j>i;j--)
			{
				printf("  ");
			}
			for (j = 0; j <=i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j <= i; j++)
			{
				printf("  ");
			}
			for (j = n; j >i; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}