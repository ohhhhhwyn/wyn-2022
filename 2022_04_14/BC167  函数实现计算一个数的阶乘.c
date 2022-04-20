long long factorial(int n) {
	if (1 == n)
		return 1;
	return n*factorial(n - 1);
}
#include<stdio.h>
int main() {
	long long n;
	scanf("%lld", &n);
	printf("%lld", factorial(n));
	return 0;
}