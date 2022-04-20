#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//bool isPrime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
#include<stdio.h>
#include<stdbool.h>
bool isLeap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return true;
	}
	return false;
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (isLeap_year(year))
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
	return 0;
}
