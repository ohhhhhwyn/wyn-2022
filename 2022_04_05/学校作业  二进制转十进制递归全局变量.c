#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum = 0;
int i = 0;
int j = 1;
int Base_conversion(int num)
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		i = num % 10;
		i *= j;
		sum += i;
		num /= 10;
		j *= 2;
		Base_conversion(num);
	}
	return 0;
}
int main()
{
	int num;
	scanf("%d", &num);
	Base_conversion(num);
	int new_num = sum;
	printf("%d", new_num);
	return 0;
}
