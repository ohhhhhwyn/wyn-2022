int Sum(int num) {
	int sum = 0;
	while (num) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = 0;
	for (int i = a; i <= b; i++) {
		if (Sum(i) % 5 == 0)
			ret++;
	}
	printf("%d\n", ret);
	return 0;
}