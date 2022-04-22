#include<stdio.h>
int power(int n, int k)
{
	if (k != 0)
	{
		return n * power(n, k - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int ret = power(n, k);
	printf("%d", ret);
	return 0;
}