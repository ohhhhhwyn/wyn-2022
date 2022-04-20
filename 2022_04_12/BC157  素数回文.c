#include <stdio.h>
#include <math.h>
long long func(long long n) {
	int tmp = n;
	while (tmp > 9) {
		tmp /= 10;
		n = (n * 10 + tmp % 10);
	}
	return n;
}
int isPrime(long long num)
{
	int tmp = sqrt(num);
	for (int i = 2; i <= tmp; i++)
		if (num % i == 0)
			return 0;
	return 1;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if (isPrime(func(n)))
		printf("prime");
	else
		printf("noprime");
	return 0;
}