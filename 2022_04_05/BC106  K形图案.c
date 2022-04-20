#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i;
		for (i = 0; i <= n; i++)
		{
			int j;
			for (j = n; j >= i; j--)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 0; i < n; i++)
		{
			int j;
			for (j = 0; j <= i+1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}