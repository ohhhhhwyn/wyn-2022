void func(int n) {
	if (n < 10)
		printf("%d", n);
	else {
		printf("%d", n % 10);
		func(n / 10);
	}
}
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	func(n);
	return 0;
}