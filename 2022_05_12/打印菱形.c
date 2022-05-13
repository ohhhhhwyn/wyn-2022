#include <stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		for (int i = 1; i <= n + 1; ++i)
		{
			for (int j = i; j <= n; ++j)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * i - 1; ++k)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 0; j < i; ++j)
			{
				printf(" ");
			}
			for (int k = 0; k < 2 * n - (2 * i - 1); ++k)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}