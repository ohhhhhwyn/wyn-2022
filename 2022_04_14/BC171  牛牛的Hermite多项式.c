int h(int n,int x) {
	if (0 == n)
		return 1;
	else if (1 == n)
		return 2 * n;
	else 
		return 2 * x * h(n - 1, x) - 2 * (n - 1) * h(n - 2, x);
}
#include<stdio.h>
int main() {
	int n, x;
	scanf("%d %d", &n, &x);
	printf("%d", h(n,x));
	return 0;
}