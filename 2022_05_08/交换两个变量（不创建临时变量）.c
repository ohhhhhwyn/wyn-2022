#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	printf("输入:\n");
	scanf("%d %d", &n, &m);
	printf("Before:\n");
	printf("%d %d\n", n, m);
	m = n ^ m;
	n = n ^ m;
	m = n ^ m;
	printf("After:\n");
	printf("%d %d\n", n, m);
	return 0;
}