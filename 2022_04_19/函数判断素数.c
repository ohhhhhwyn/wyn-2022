#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}