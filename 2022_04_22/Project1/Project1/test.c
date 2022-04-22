#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define N 20
//int main()
//{
//	int a[N];
//	int i, n, m, t;
//	int* p, * q;
//	scanf("%d", &n);   //输入整数个数
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	p = a;
//	scanf("%d", &m);   //输入移动位数
//	/***** 首先逆置数组前m个元素 *****/
//	/*
//	q = &a[m - 1];
//	for (i = 0; i < m / 2; i++) {
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q--;
//	}*/
//	for (p = a, q = a + m - 1; p < q; p++, q--)
//	{
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//	}
//	/***** 逆置余下n-m个元素 *****/
//	/*
//	p = &a[m];
//	q = &a[n - 1];
//	for (i = 0; i < (n - m) / 2; i++) {
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q--;
//	}
//	*/
//	for (p = a+m, q = a + n - 1; p < q; p++, q--)
//	{
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//	}
//	/***** 逆置整个数组 *****/
//	/*
//	p = a;
//	q = &a[n - 1];
//	for (i = 0; i < n / 2; i++) {
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q--;
//	}
//	*/
//	for (p = a, q = a + n - 1; p < q; p++, q--)
//	{
//		int tmp = *p;
//		*p = *q;
//		*q = tmp;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include<stdio.h>
//int non_recursive(int n)
//{
//	int ret = 1;
//	for (int i = n; i > 0; i--)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int recursive(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * recursive(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret1 = non_recursive(n);
//	printf("%d\n", ret1);
//	int ret2 = recursive(n);
//	printf("%d\n", ret2);
//	return 0;
//}
//#include<stdio.h>
//int recursive(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + recursive(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int non_recursive(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char* str = "abcdefg";
//	int ret1 = recursive(str);
//	printf("%d\n", ret1);
//	int ret2 = non_recursive(str);
//	printf("%d\n", ret2);
//	return 0;
//}
//#include<stdio.h>
//void reverse_string(char* string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	printf("%c", *string);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int power(int n, int k)
//{
//	if (k != 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//int non_recursive(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int recursive(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return recursive(n - 1) + recursive(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret1 = non_recursive(n);
//	printf("%d\n", ret1);
//	int ret2 = recursive(n);
//	printf("%d\n", ret1);
//	return 0;
//}
//#include<stdio.h>
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	printf("%d", Fun(2));
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}