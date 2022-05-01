#include<stdio.h>
int IsLeap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (IsLeap_year(n))
	{
		printf("Is a leap year\n");
	}
	else
	{
		printf("Is not a leap year\n");
	}
	return 0;
}