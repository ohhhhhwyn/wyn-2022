#include<stdio.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int max = 0;
	while (n % m != 0)
	{
		max = n % m;
		n = m;
		m = max;
	}
	printf("%d\n", max);
	return 0;
}