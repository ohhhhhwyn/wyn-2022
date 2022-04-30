#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}