#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define   N   10
//int main()
//{
//	int i, a[N] = { -5,4,9,15,28,45,66,89,100,180 }, k = -1, m;
//	int low = 0, high = N - 1, mid;
//
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//
//	scanf("%d", &m);
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (m < a[mid])
//			high = mid - 1;
//		/***** 以下一行有错误 *****/
//		else if (m > a[mid])
//			low = mid + 1;
//		/***** 以下一行有错误 *****/
//		else
//		{
//			k = mid; 
//			continue;
//		}
//	}
//	if (k >= 0)
//		printf("m=%d,index=%d\n", m, k);
//	else
//		printf("Not be found!\n");
//	return 0;
//}
/********** Begin **********/
//#include<stdio.h>
//#define M 9
//#define N 9
//int main()
//{
//    int m = 0, n = 0;
//    char arr[M][N] = { 0 };
//    scanf("%d %d", &m, &n);
//    for (int i = 0; i < m; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    char str[M * N] = { 0 };
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j < m; ++j)
//        {
//            str[k++] = arr[j][i];
//        }
//    }
//    for (int i = 0; i < k; ++i)
//    {
//        printf("%c", str[i]);
//    }
//    return 0;
//}
/********** End **********/
//#include<stdio.h>
//#define N 19
//int main()
//{
//	int n = 0;
//	int arr[N][N] = { 0 };
//	int val = 0, sum = 0;
//	int i = 0, j = 0;
//	//输入
//	scanf("%d", &n);
//	for (i = 0; i < n; ++i)
//	{
//		for (j = 0; j < n; ++j)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//判断行
//	for (i = 0; i < n; ++i)
//	{
//		sum = 0;
//		for (j = 0; j < n; ++j)
//		{
//			sum += arr[i][j];
//		}
//		val = (val == 0) ? sum : val;
//		if (val != sum)
//		{
//			printf("No\n");
//			return 0;
//		}
//	}
//	//判断列
//	for (i = 0; i < n; ++i)
//	{
//		sum = 0;
//		for (j = 0; j < n; ++j)
//		{
//			sum += arr[j][i];
//		}
//		if (val != sum)
//		{
//			printf("No\n");
//			return 0;
//		}
//	}
//	//判断对角线
//	sum = 0;
//	for (i = 0, j = 0; i < n; ++i)
//	{
//		sum += arr[i][j];
//	}
//	if (val != sum)
//	{
//		printf("No\n");
//		return 0;
//	}
//	printf("Yes\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0; 
//	scanf("%d", &n);
//	printf("右移：\n");
//	printf("偶数位：\n");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位：\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("左移：\n");
//	printf("偶数位：\n");
//	for (int i = 31; i >= 0; i -= 2)
//	{
//		if (n & (1 << i))
//		{
//			printf("%d ", 1);
//		}
//		else
//		{
//			printf("%d ", 0);
//		}
//	}
//	printf("\n");
//	printf("奇数位：\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		if (n & (1 << i))
//		{
//			printf("%d ", 1);
//		}
//		else
//		{
//			printf("%d ", 0);
//		}
//	}
//	printf("\n");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	printf("输入:\n");
	scanf("%d %d", &n, &m);
	printf("Before:\n");
	printf("%d %d\n", n, m);
	m = n ^ m;
	n = n ^ m;
	m = n ^ m;
	printf("After:\n");
	printf("%d %d\n", n, m);
	return 0;
}