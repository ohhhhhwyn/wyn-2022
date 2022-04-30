#include<stdio.h>
#include<limits.h>
int main()
{
	int n = 0;
	int max = INT_MIN;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if (max < n)
		{
			max = n;
		}
	}
	printf("%d\n", max);
	return 0;
}