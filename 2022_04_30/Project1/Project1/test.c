#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	printf("%d", strlen("abcdef"));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	printf("%d\n", n > m ? n : m);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
//	int mid = a + b + c - max - min;
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int n = 0;
//	int max = INT_MIN;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (max < n)
//		{
//			max = n;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int IsPrime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (IsPrime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double sum = 0.0;
//	int symbol = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / (symbol * (double)i);
//		symbol *= -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int max = 0;
//	for (int i = 2; i <= (n < n ? n : m); i++)
//	{
//		if (n % i == 0 && m % i == 0)
//		{
//			max = i;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int max = 0;
//	while (n % m != 0)
//	{
//		max = n % m;
//		n = m;
//		m = max;
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int val = 0;
//	scanf("%d", &val);
//	int nums[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int left = 0;
//	int right = numsSize - 1;
//	while (left <= right)
//	{
//		int mid = left + ((right - left) >> 1);
//		if (val < nums[mid])
//		{
//			right = mid - 1;
//		}
//		else if (val > nums[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<Windows.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf("***    1.start    ***\n");
	printf("***    0.exit     ***\n");
	printf("*********************\n");
}
void Game()
{
	int val = 1 + rand() % 10;
	printf("Please enter the target number:>");
	while (1)
	{
		int num = 0;
		scanf("%d", &num);
		if (val < num)
		{
			printf("Again a little bit small\n");
			printf("Please re-enter:>");
		}
		else if (val > num)
		{
			printf("Again a bit bigger\n");
			printf("Please re-enter:>");
		}
		else
		{
			printf("bingo\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("Please enter:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			getchar();
			getchar();
			system("cls");
			break;
		case 0:
			printf("Game quit\n");
			break;
		default:
			printf("Please re-enter\n");
			break;
		}
	} while (input);
}