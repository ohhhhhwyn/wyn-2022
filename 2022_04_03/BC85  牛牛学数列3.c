#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sign = -1;
	int tmp = 0;
	double sum = 0;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sign *= (-1);
		tmp += (sign * (2 * i - 1));
		sum += 1.0/tmp;
	}
	printf("%.3f", sum);
	return 0;
}
