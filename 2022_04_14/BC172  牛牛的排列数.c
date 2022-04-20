int A(int n, int m) {
	if (0 == m)
		return 1;
	else if (1 == m)
		return n;
	return (n - m + 1) * A(n, m - 1);
}
#include<stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", A(n, m));
	return 0;
}