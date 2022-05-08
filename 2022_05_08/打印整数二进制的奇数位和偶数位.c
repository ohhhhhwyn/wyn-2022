#include<stdio.h>
int main()
{
	int n = 0; 
	scanf("%d", &n);
	printf("右移：\n");
	printf("偶数位：\n");
	for (int i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("奇数位：\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("左移：\n");
	printf("偶数位：\n");
	for (int i = 31; i >= 0; i -= 2)
	{
		if (n & (1 << i))
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}
	printf("\n");
	printf("奇数位：\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		if (n & (1 << i))
		{
			printf("%d ", 1);
		}
		else
		{
			printf("%d ", 0);
		}
	}
	printf("\n");
	return 0;
}
