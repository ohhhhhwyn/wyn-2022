#include<stdio.h>
int non_recursive(int n)
{
	int ret = 1;
	for (int i = n; i > 0; i--)
	{
		ret *= i;
	}
	return ret;
}
int recursive(int n)
{
	if (1 == n)
	{
		return 1;
	}
	else
	{
		return n * recursive(n - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret1 = non_recursive(n);
	printf("%d\n", ret1);
	int ret2 = recursive(n);
	printf("%d\n", ret2);
	return 0;
}