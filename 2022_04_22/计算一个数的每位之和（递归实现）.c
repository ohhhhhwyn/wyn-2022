#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	return n;
}
int main()
{
	int n;
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	return 0;
}