int IsPrime(int num) {
	if (num <= 3)
		return 1;
	if (num % 6 != 1 && num % 6 != 5)
		return 0;
	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) {
			return 0;
		}
	}
	return 1;
}
#include<stdio.h>
int main() {
	int n, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		if (IsPrime(num))
			printf("true\n");
		else
			printf("false\n");
	}
	return 0;
}