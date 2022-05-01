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