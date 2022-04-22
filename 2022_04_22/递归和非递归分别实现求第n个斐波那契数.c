#include<stdio.h>
int non_recursive(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int recursive(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		return recursive(n - 1) + recursive(n - 2);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret1 = non_recursive(n);
	printf("%d\n", ret1);
	int ret2 = recursive(n);
	printf("%d\n", ret1);
	return 0;
}