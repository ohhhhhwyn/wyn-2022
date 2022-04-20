#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sign = -1;
//	int tmp = 0;
//	double sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sign *= (-1);
//		tmp += (sign * (2 * i - 1));
//		sum += 1.0/tmp;
//	}
//	printf("%.3f", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int tmp = 0;
//    int sum = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        tmp += i;
//        sum += tmp;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int num = 0;
//    int sum = 0;
//    scanf("%d", &num);
//    while (num)
//    {
//        sum += num % 10;
//        num /= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    while (!(n == 1))
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//            count++;
//        }
//        else 
//        {
//            n = 3 * n + 1;
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    while (!(n == 1))
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//            count++;
//        }
//        else
//        {
//            n = 3 * n + 1;
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 2019;
//    int count = 0;
//    for (int i = 1; i <= a; i++)
//    {
//        if (i % 10 == 9 || i / 10 % 10 == 9 || i / 100 % 10 == 9)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int cn, math, en;
//    int count = 0;
//    int i = 0;
//    for (; i < n; i++)
//    {
//        scanf("%d %d %d", &cn, &math, &en);
//        if ((cn + math + en) / 3.0 < 60)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (~scanf("%d %d", &m, &n))
//    {
//        int count = 0;
//        for (; m <= n; m++)
//        {
//            int ge = 1;
//            int shi = 1;
//            int bai = 1;
//            for (int i = 0; i < 3; i++)
//            {
//                ge *= m % 10;
//                shi *= m / 10 % 10;
//                bai *= m / 100;
//            }
//            if (ge + shi + bai == m)
//            {
//                printf("%d ", m);
//                count++;
//            }
//        }
//        if (count == 0)
//        {
//            printf("no\n");
//        }
//        else
//        {
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i;
//    for (i = 10000; i <= 99999; i++)
//    {
//        if ((i % 10) * (i / 10) +
//            (i % 100) * (i / 100) +
//            (i % 1000) * (i / 1000) +
//            (i % 10000) * (i / 10000) == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 5,7,9,8,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz -1 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,8,9,5,4,5,5,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int MinIndex = i;
//		int j;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[MinIndex] > arr[j])
//			{
//				MinIndex = j;
//			}
//		}
//		int tmp = arr[MinIndex];
//		arr[MinIndex] = arr[i];
//		arr[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 8,4,5,5,8,4,5,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
	//int i;
	//for (i = 0; i < sz - 1; i++)
	//{
	//	int MinIndex = i;
	//	int j;
	//	for (j = i + 1; j < sz; j++)
	//	{
	//		if (arr[MinIndex] > arr[j])
	//		{
	//			MinIndex = j;
	//		}
	//	}
	//	int tmp = arr[MinIndex];
	//	arr[MinIndex] = arr[i];
	//	arr[i] = tmp;
	//}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,5,5,9,8,4,7,6,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = sz;
//	int x = arr[0];
//	while (i < j)
//	{
//		while (i < j && arr[j] >= x)
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			arr[i] = arr[j];
//			i++;
//		}
//		while (i < j && arr[i] <= x)
//		{
//			i++;
//		}
//		if (i < j)
//		{
//			arr[j] = arr[i];
//			j--;
//		}
//	}
//	arr[i] = x;
//
//	return 0;
//}
//#include<stdio.h>
//#define SZ 7
//int main()
//{
//	int arr[SZ] = { 79 ,65 ,71, 92, 42, 64, 54 };
//	int i = 0;
//	for (i = 0; i < SZ - 1; i++)
//	{
//		int MinIndex = i;
//		int j;
//		for (j = i + 1; j < SZ; j++)
//		{
//			if (arr[MinIndex] > arr[j])
//			{
//				MinIndex = j;
//			}
//		}
//		int tmp = arr[MinIndex];
//		arr[MinIndex] = arr[i];
//		arr[i] = tmp;
//	}
//	arr[0] = 0;
//	arr[SZ - 1] = 0;
//	int sum = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		sum += arr[i];
//	}
//	double ret = sum / 7.0;
//	printf("%.2f", ret);
//	return 0;
//}
//#include<stdio.h>
//#define SZ 7
//int main()
//{
//	int arr[SZ] = { 0 };
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]))
//	{
//		int i = 0;
//		for (i = 0; i < SZ - 1; i++)
//		{
//			int MinIndex = i;
//			int j = 0;
//			for (j = 1 + i; j < SZ; j++)
//			{
//				if (arr[MinIndex] > arr[j])
//				{
//					MinIndex = j;
//				}
//			}
//			int tmp = arr[MinIndex];
//			arr[MinIndex] = arr[i];
//			arr[i] = tmp;
//		}
//		arr[0] = 0;
//		arr[SZ - 1] = 0;
//		int sum = 0;
//		for (i = 0; i < SZ; i++)
//		{
//			sum += arr[i];
//		}
//		double ret = sum / 5.0;
//		printf("%.2f\n", ret);
//	}
//	return 0;
//}
//多组输入
//#include <stdio.h>
//int main()
//{
//	double score = 0.0;
//	double sum = 0.0;
//	double max = 0.0;
//	double min = 100.0;
//	int cnt = 0;
//	while (scanf("%lf", &score) != EOF)
//	{
//		cnt++;
//		sum += score;
//		if (max < score)
//		{
//			max = score;
//		}
//		if (min > score)
//		{
//			min = score;
//		}
//		if (cnt == 7)
//		{
//			printf("%.2lf\n", (sum - max - min) / 5.0);
//			//重置
//			cnt = 0;
//			max = 0.0;
//			min = 100.0;
//			sum = 0.0;
//			score = 0.0;
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d", num % 10);
//		num /= 10;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p",&a);
//	return 0;
//}
//#include<stdio.h> 
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	while (n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	while (i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int nums = 0;//发放金币的天数
//	scanf("%d", &nums);
//	int sum = 0;//收到的金币数
//	int days = 0;//统计已发放的天数
//	int i = 0;
//	while (days < nums)
//	{
//		int tmp = 1;
//		if (nums - days >= i)
//		{
//			days += i++;
//			for (int j = 0; j < i; j++)
//			{
//				tmp *= i;
//			}
//		}
//		else
//		{
//			days += nums - days;
//			for (int j = 0; j < nums - days; j++)
//			{
//				i += 1;
//				tmp *= i;
//				i -= 1;
//			}
//		}
//		sum += tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}
//
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        int j = i;
        while (j)
        {
            int k = j % 10;
            sum = sum * 10 + k;
            j /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
        sum = 0;
    }
    return 0;
}