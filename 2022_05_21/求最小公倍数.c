/*
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (~scanf("%d %d", &a, &b))
	{
		int max = a > b ? a : b;
		for (int i = max; i <= a * b; ++i)
		{
			if (i % a == 0 && i % b == 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (~scanf("%d %d", &a, &b))
	{
		for (int i = 1; i <= b; ++i)
		{
			if ((a * i) % b == 0)
			{
				printf("%d\n", a * i);
				break;
			}
		}
	}
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (~scanf("%d %d", &a, &b))
	{
		int mul = a * b;
		int c = 0;
		while (b)
		{
			c = a % b;
			a = b;
			b = c;
		}
		printf("%d\n", mul / a);
	}
	return 0;
}