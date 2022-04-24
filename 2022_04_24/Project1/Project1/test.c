#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Add(int x, int y)
//{
//    int sum = 0;
//    sum = x + y;
//    return sum;
//}
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int ret = 0;
//    ret = Add(a, b);
//    printf("%d", ret);
//    return 0;
//}
//#include<stdio.h>
//void Change(int* n)
//{
//	*n = 20;
//}
//int main()
//{
//	int num = 10;
//	Change(&num);
//	printf("%d", num);
//	return 0;
//}
//#include<stdio.h>
//int Change(int n)
//{
//    n = 20;
//    return n;
//}
//int main()
//{
//    int num = 10;
//    Change(num);
//    printf("%d", num);
//    return 0;
//}
//#include<stdio.h>
//int fun2(int num)
//{
//    num += 1000;
//    return num;
//}
//int fun1(int num)
//{
//    num += 100;
//    int tmp = 0;
//    tmp = fun2(num);
//    return tmp;
//}
//int main()
//{
//    int num = 10;
//    int ret = 0;
//    ret = fun1(num);
//    printf("%d", ret);
//    return 0;
//}
//#include<stdio.h>
//void fun1()
//{
//    void fun2()
//    {
//        printf("hehe\n");
//    }
//}
//int main()
//{
//    fun1();
//    return 0;
//}
//#include<stdio.h>
//void fun2()
//{
//	printf("hehe\n");
//}
//void fun1()
//{
//	fun2();
//}
//int main()
//{
//	fun1();
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));//这里介绍一下strlen函数
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//#include<stdio.h>
//#include"test.h"
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = Add(10, 20);
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//void Print(int num)
//{
//    if (num > 10)
//    {
//        Print(num / 10);
//    }
//    printf("%d ", num % 10);
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    Print(num);
//    return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//int main()
//{
//	char* p = "abc";
//	int len = my_strlen(p);
//	printf("%d", len);
//	return 0;
//}
//#include<stdio.h>
//int factorial(int n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    else
//    {
//        return n * factorial(n - 1);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = factorial(n);
//    printf("%d", ret);
//    return 0;
//}
#include<stdio.h>
//int fib(int n)
//{
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//int count = 0;//全局变量
//int fib(int n)
//{
//    if (n == 3)
//    {
//        count++;
//    }
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//int fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n >= 3)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d\n", ret);
//    return 0;
//}
//#include<stdio.h>
//void Swap(int* p1, int len1, int* p2, int len2)
//{
//	int tmp = 0;
//	int i = 0;
//	for (int i = 0; i < len1 || i < len2;i++)
//	{
//		tmp = *p1;
//		*p1++ = *p2;
//		*p2++ = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	Swap(arr1, len1, arr2, len2);
//	for (int i = 0; i < len1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < len2; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
#include<stdio.h>
void init(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int size)
{
	int* left = arr;
	int* right = arr + size - 1;
	while (left < right)
	{
		int tmp = *left;
		*left++ = *right;
		*right-- = tmp;
	}
}
int main()
{
	int arr[10];
	init(arr, 10);
	print(arr, 10);
	reverse(arr, 10);
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}




















