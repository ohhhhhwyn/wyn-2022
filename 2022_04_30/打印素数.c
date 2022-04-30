#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		int flag = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}