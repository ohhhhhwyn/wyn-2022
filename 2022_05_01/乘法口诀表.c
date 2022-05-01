#include<stdio.h>
void Multiplication_tables(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Multiplication_tables(n);
	return 0;
}