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