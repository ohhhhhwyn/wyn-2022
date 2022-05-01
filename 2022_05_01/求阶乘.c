#include<stdio.h>
int factorial_d(n)
{
	if (1 == n || 0 == n)
	{
		return 1;
	}
	return n * factorial_d(n - 1);
}
int factorial(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret1 = factorial_d(n);
	printf("%d\n", ret1);
	int ret2 = factorial(n);
	printf("%d\n", ret2);
	return 0;
}