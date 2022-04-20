#include<stdio.h>
int a[30] = { 0 };
int main() {
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	int n;
	scanf("%d", &n);
	for (int i = 3; i <= n; i++)
		a[i] = a[i - 1] + a[i - 2];
	printf("%d", a[n]);
	return 0;
}