#define _CRT_SECURE_NO_WARNINGS
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
//			printf("*\n");
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
//			for (j = n; j > 1+i; j--)
//			{
//				printf(" ");
//			}
//			printf("*\n");
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
//		for (i = 1; i <= n / 2; i++)
//		{
//			int j;
//			for (j = 0; j < i - 1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0; j < n - 2 * i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		if (n % 2 != 0)
//		{
//			for (i = 0; i < n / 2; i++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		for (i = 1; i <= n / 2; i++)
//		{
//			int j;
//			for (j = n / 2; j > i; j--)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j=n/2;j>=;j--)
//			{
//				printf(" ");
//			}
//			printf("*\n");
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
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || j == n - 1 - i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
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
//			printf("* ");
//		}
//		printf("\n");
//		for (i = 0; i < n - 2; i++)
//		{
//			printf("* ");
//			int j;
//			for (j = 0; j < n - 2; j++)
//			{
//				printf("  ");
//			}
//			printf("*\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
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
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= n; j++)
//			{
//				if (j == 1 || j == n || i == 1 || i == n)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
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
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= n; j++)
//			{
//				if (i == n || j == 1 || j == i)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
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
//		for (i = 1; i <= n; i++)
//		{
//			int j;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//void Space()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 3; j++)
//		{
//			printf("#");
//		}
//		printf("\n");
//	}
//}
//void Triangle()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 3; j > 1 + i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 1 + i; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		for (i = 1; i <= n * n; i++)
//		{
//			int j;
//			for (j = 1; j <= n * n - i; j++)
//			{
//				printf(' ');
//			}
//			for (j = 1; j <= n; j++)
//			{
//
//			}
//		}
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 3; j++) {
//			for (int k = 1; k + i <= n; k++)
//				printf("   ");
//			for (int l = i; l > 0; l--) {
//				switch (j) {
//				case 1:printf("  *   "); break;
//				case 2:printf(" * *  "); break;
//				case 3:printf("* * * "); break;
//				default:break;
//				}
//			}
//			printf("\n");
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < n; j++) {
//			printf("   ");
//		}
//		printf("  *\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			for (int k = 1; k + i <= n; k++)
//				printf("   ");
//			for (int l = i; l > 0; l--) {
//				switch (j) {
//				case 1:printf("  *   "); break;
//				case 2:printf(" * *  "); break;
//				case 3:printf("* * * "); break;
//				default:break;
//				}
//			}
//			printf("\n");
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < n; j++) {
//			printf("   ");
//		}
//		printf("  *\n");
//	}
//}
//#include<stdio.h>
//int main(){
//	int a, b, count = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 1; i <= a; i++) {
//		for (int j = i; j > 0; j /= 10) {
//			if (j % 10 == b)
//				count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 9; i >= 0; i--)
//		printf("%d ", arr[i]);
//	return 0;
//}
//
//
//#include<stdio.h>
//int main() {
//	int n;
//	int arr[51] = { 0 };
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%d",&arr[i]);
//	for (int j = 0; j < n; j++) {
//		sum += arr[j];
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	int arr[101] = { 0 };
//	int max = 0;
//	int min = 100;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//		if (max <= arr[i])
//			max = arr[i];
//		if (min >= arr[i])
//			min = arr[i];
//	}
//	printf("%d", max - min);
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (int i = 0; i < n-1; i++) {
//		int MaxIndex = i;
//		for (int j = 1 + i; j < n; j++) {
//			if (arr[MaxIndex] < arr[j])
//				MaxIndex = j;
//		}
//		int tmp = arr[MaxIndex];
//		arr[MaxIndex] = arr[i];
//		arr[i] = tmp;
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (int i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	int i=0, j=0;
//	while (i < n && j < m) {
//		if (arr1[i] < arr2[j]) {
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else {
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i == n && j < m)
//		for (; j < m; j++)
//			printf("%d ", arr2[j]);
//	else
//		for (; i < n; i++)
//			printf("%d ", arr1[i]);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < n-1; i++) {
//		if (arr[i] <= arr[i + 1])
//			count1++;
//		if (arr[i] >= arr[i + 1])
//			count2++;
//	}
//	if (count1 == n - 1 || count2 == n - 1)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int num;
//	scanf("%d", &num);
//	for (i = 0; i < n - 1; i++) {
//		if (arr[i] <= num && num <= arr[i + 1]) {
//			int j;
//			for (j = n - 1; j > i ; j--) {
//				arr[j+1] = arr[j];
//			}
//			arr[i + 1] = num;
//		}
//	}
//	for (i = 0; i < n + 1; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
int main() {
	int n = 3;
	int arr[10] = { 1,2,3 };
	int num = 4;
	int i;
	for (i = 0; i < n; i++) {
		if (num <= arr[i]) {
			int j;
			for (j = n - 1; j >= i; j--) {
				arr[j + 1] = arr[j];
			}
			arr[i] = num;
			break;
		}
		else {
			arr[n] = num;
		}
	}
	for (i = 0; i < n + 1; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}


