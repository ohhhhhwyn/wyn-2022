#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	char arr[3] = "abcdef";
//	//printf("%s\n", arr);
//	int arr1[5] = { 'a', 'b', 'c', 'd', 'e' };
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < size; ++i)
//    {
//        printf("&arr[%d] = %p\n", i, &arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[3][] = { {1,2,3}, {4,5,6} };
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[3][4] = { 0 };
//    for (int i = 0; i < 3; ++i)
//    {
//        for (int j = 0; j < 4; ++j)
//        {
//            arr[i][j] = i * 4 + j;
//        }
//    }
//    for (int i = 0; i < 3; ++i)
//    {
//        for (int j = 0; j < 4; ++j)
//        {
//            printf("%-2d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[])
//{
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("函数内的size的大小：%d\n", size);
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = 0; j < size - 1 - i; ++j)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//printf("before:\n");
//	for (int i = 0; i < size; ++i)
//	{
//		//printf("%d ", arr[i]);
//	}
//	bubble_sort(arr);
//	//printf("\nafter:\n");
//	for (int i = 0; i < size; ++i)
//	{
//		//printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//void bubble_sort(int arr[], int size)
//{
//	printf("函数外的size的大小：%d\n", size);
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = 0; j < size - 1 - i; ++j)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3, 1, 7, 5, 8, 9, 0, 2, 4, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//printf("before:\n");
//	for (int i = 0; i < size; ++i)
//	{
//		//printf("%d ", arr[i]);
//	}
//	bubble_sort(arr, size);
//	//printf("\nafter:\n");
//	for (int i = 0; i < size; ++i)
//	{
//		//printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	printf("%d\n", arr[0]);
//	printf("%d\n", *arr);
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	double c = 15.7;
//	double d = 3.14;
//	int sum1 = a + b;
//	double sum2 = a + c;
//	double sum3 = c + d;
//	printf("%d\n%lf\n%lf\n", sum1, sum2, sum3);
//	printf("\n");
//	int sub1 = a - b;
//	double sub2 = a - c;
//	double sub3 = c - d;
//	printf("%d\n%lf\n%lf\n", sub1, sub2, sub3);
//	printf("\n");
//	int pro1 = a * b;
//	double pro2 = a * c;
//	double pro3 = c * d;
//	printf("%d\n%lf\n%lf\n", pro1, pro2, pro3);
//	printf("\n");
//	int div1 = a / b;
//	double div2 = a / c;
//	double div3 = c / d;
//	printf("%d\n%lf\n%lf\n", div1, div2, div3);
//	printf("\n");
//	int mo1 = a % b;
//	int mo2 = b % a;
//	printf("%d\n%d\n", mo1, mo2);
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    if (a == 1)
//    {
//        printf("hello world!\n");
//    }
//    if (!(a == 1))
//    {
//        printf("hello world!\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = -1;
//    int b = 0;
//    int c = 0;
//    b = -a;
//    c = +b;
//    printf("%d ", b);
//    printf("%d ", c);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    printf("%p", &a);
//    return 0;
//}
//#include <stdio.h>
//void test1(int arr[])
//{
//    printf("%d\n", sizeof(arr));//(1)
//}
//void test2(char ch[])
//{
//    printf("%d\n", sizeof(ch));//(2)
//}
//int main()
//{
//    int arr[10] = { 0 };
//    char ch[10] = { 0 };
//    test1(arr);
//    test2(ch);
//    printf("%d\n", sizeof(arr));//(3)
//    printf("%d\n", sizeof(ch));//(4)
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double a = 10.5;
//	int b = (int)a;
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	if ((1 == 1) && (2 == 2))
//	{
//		printf("全为真，才打印\n");
//	}
//	if ((1 == 1) && (1 == 2))
//	{
//		printf("至少有一个为假，不打印\n");
//	}
//	if ((1 == 1) || (1 == 2))
//	{
//		printf("至少有一个为真，就打印\n");
//	}
//	if ((1 == 2) || (1 == 2))
//	{
//		printf("全为假，不打印\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int c = (a > b) ? a : b;
//	int d = (a < b) ? a : b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(10));
//	printf("%d\n", sizeof 10);
//	printf("%d\n", sizeof(int));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 8;
//	3[arr] = 6;
//	printf("%d\n", arr[5]);
//	printf("%d\n", 5[arr]);
//	printf("%d\n", arr[3]);
//	printf("%d\n", 3[arr]);
//	return 0;
//}
//#include <stdio.h>
//void test1()
//{
//    printf("hello world!\n");
//}
//void test2(char* str)
//{
//    printf("%s\n", str);
//}
//int main()
//{
//    char* str = "hello world!";
//    test1();//一个操作数test1
//    test2(str);//两个操作数test2和str
//}
//#include <stdio.h>
//struct Stu
//{
//    int age;
//};
//int main()
//{
//    struct Stu s;
//    struct Stu* ps = &s;
//    s.age = 20;
//    printf("%d\n", s.age);
//    ps->age = 30;
//    printf("%d\n", ps->age);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a\n");
//	}
//	if (b == 0xb600)
//	{
//		printf("b\n");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float f = 3.14;
//	int num = f;
//	printf("%d\n", num);
//	return 0;
//}
#include <stdio.h>
int Sumofsquares(int num)
{
    int sum = 0;
    while (num)
    {
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    int n = 19;
    while (n > 9)
    {
        n = Sumofsquares(n);
    }
    if (n == 1)
    {
        printf("true\n");
    }

}