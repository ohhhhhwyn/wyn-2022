#include<stdio.h>
int main()
{
	double sum = 0.0;
	int symbol = 1;
	for (int i = 1; i <= 100; i++)
	{
		sum += 1.0 / (symbol * (double)i);
		symbol *= -1;
	}
	printf("%lf\n", sum);
	return 0;
}