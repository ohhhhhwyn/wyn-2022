#include<stdio.h>
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d", ret);
	return 0;
}