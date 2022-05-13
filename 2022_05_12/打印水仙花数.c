#include <stdio.h>
int my_pow(int num, int n)
{
	int ret = 1;
	for (int i = 0; i < n; ++i)
	{
		ret *= num;
	}
	return ret;
}
int flower(int num, int n)
{
	int tmp = num;
	int sum = 0;
	while (tmp)
	{


		sum += my_pow((tmp % 10), n);
		tmp /= 10;
	}
	if (sum == num)
	{
		return 1;
	}
	return 0;
}
int main()
{
	for (int i = 0; i < 100000; ++i)
	{
		if (i >= 0 && i < 10)
		{
			if (flower(i, 1))
			{
				printf("%d ", i);
			}
		}
		else if (i >= 10 && i < 100)
		{
			if (flower(i, 2))
			{
				printf("%d ", i);
			}
		}
		else if (i >= 100 && i < 1000)
		{
			if (flower(i, 3))
			{
				printf("%d ", i);
			}
		}
		else if (i >= 1000 && i < 10000)
		{
			if (flower(i, 4))
			{
				printf("%d ", i);
			}
		}
		else
		{
			if (flower(i, 5))
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}