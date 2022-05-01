#include<stdio.h>
#include<math.h>
int IsPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (IsPrime(n))
	{
		printf("Is a prime number\n");
	}
	else
	{
		printf("Is not a prime number\n");
	}
	return 0;
}