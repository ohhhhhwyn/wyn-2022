#include<stdio.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	printf("%d\n", n > m ? n : m);
	return 0;
}