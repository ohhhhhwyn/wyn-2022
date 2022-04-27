#include<stdio.h>
int func(int n)
{
	if (n > 2)
	{
		return func(n - 1) + func(n - 2);
	}
    return n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", func(n));
	return 0;
}