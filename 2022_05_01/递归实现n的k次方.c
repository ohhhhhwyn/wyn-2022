#include<stdio.h>
#include<assert.h>
double my_pow(double n, double k)
{
	assert(!(n == 0 && k == 0));

	if (0 == n)
	{
		return 0;
	}
	if (0 == k)
	{
		return 1;
	}
	return (k > 0) ? (n * my_pow(n, k - 1)) : (1 / n * my_pow(n, k + 1));
}
int main()
{
	double n = 0, k = 0;
	scanf("%lf %lf", &n, &k);
	double ret = my_pow(n, k);
	printf("%lf\n", ret);
	return 0;
}