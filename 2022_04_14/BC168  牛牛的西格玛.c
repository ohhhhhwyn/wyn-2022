int Add(int n) {
	if (1 == n)
		return 1;
	return n + Add(n - 1);
}
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", Add(n));
	return 0;
}