#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int IsPrime(int n)
//{
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (IsPrime(n))
//	{
//		printf("Is a prime number\n");
//	}
//	else
//	{
//		printf("Is not a prime number\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int IsLeap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (IsLeap_year(n))
//	{
//		printf("Is a leap year\n");
//	}
//	else
//	{
//		printf("Is not a leap year\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("Before:%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("After:%d %d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//void Multiplication_tables(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Multiplication_tables(n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	double tmp = 1;
//	double sum = 0;
//	while (i <= 50)
//	{
//		tmp *= i;
//		sum += tmp;
//		++i;
//	}
//	printf("%.0lf\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a;
//    int i = 0;
//    int number = 0; //数字个数
//    int space = 0;  //空格个数
//    int letters = 0; //字母个数
//    int other = 0;  //其他个数
//    while ((a = getchar()) && a != '\n')
//    {
//        if (a >= '0' && a <= '9')
//        {
//            number++;
//        }
//        else if (a == ' ')
//        {
//            space++;
//        }
//        else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//        {
//            letters++;
//        }
//        else
//        {
//            other++;
//        }
//    }
//    printf("英文字母个数为:%d\n", letters);
//    printf("数字个数为:%d\n", number);
//    printf("空格个数为:%d\n", space);
//    printf("其他个数为:%d\n", other);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char nums[20];
//	char *arr=nums;
//	fgets(arr,10,stdin);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//}
//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//#include<stdio.h>
//int factorial_d(n)
//{
//	if (1 == n || 0 == n)
//	{
//		return 1;
//	}
//	return n * factorial_d(n - 1);
//}
//int factorial(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = factorial_d(n);
//	printf("%d\n", ret1);
//	int ret2 = factorial(n);
//	printf("%d\n", ret2);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen_d(char* str)
//{
//	if ('\0' == *str)
//	{
//		return 0;
//	}
//	return 1 + my_strlen_d(++str);
//}
//int my_strlen(char* str)
//{
//	int len = 0;
//	while (*str != '\0')
//	{
//		++len;
//		++str;
//	}
//	return len;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int len1 = my_strlen_d(str);
//	printf("%d\n", len1);
//	int len2 = my_strlen(str);
//	printf("%d\n", len2);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* string)
//{
//	while ('\0' == *string)
//	{
//		return 0;
//	}
//	return 1 + my_strlen(++string);
//}
//void reverse_string(char* string)
//{
//	int length = my_strlen(string);
//	char tmp = *string;
//	*string = *(string + length - 1);
//	*(string + length - 1) = '\0';
//	if (my_strlen(string + 1) >= 2)
//	{
//		reverse_string(string + 1);
//	}
//	*(string + length - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("Before:");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	reverse_string(arr);
//	printf("\nAfter :");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//double my_pow(double n, double k)
//{
//	assert(!(n == 0 && k == 0));
//
//	if (0 == n)
//	{
//		return 0;
//	}
//	if (0 == k)
//	{
//		return 1;
//	}
//	return (k > 0) ? (n * my_pow(n, k - 1)) : (1 / n * my_pow(n, k + 1));
//}
//int main()
//{
//	double n = 0, k = 0;
//	scanf("%lf %lf", &n, &k);
//	double ret = my_pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
int fib(int n)
{
	assert(n > 0);

	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int fib_d(int n)
{
	assert(n > 0);

	if (n < 3)
	{
		return 1;
	}
	return fib_d(n - 1) + fib_d(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret1 = fib(n);
	int ret2 = fib_d(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}