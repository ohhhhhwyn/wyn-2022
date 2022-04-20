int Transformation(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	while (n >= 10) {
		n = Transformation(n);
	}
	printf("%d",n);
	return 0;
}