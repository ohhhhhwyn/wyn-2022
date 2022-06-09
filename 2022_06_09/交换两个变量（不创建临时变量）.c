#include <stdio.h>
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	n = n ^ m;
	m = n ^ m;
	n = n ^ m;
	printf("%d %d\n", n, m);
	return 0;
}