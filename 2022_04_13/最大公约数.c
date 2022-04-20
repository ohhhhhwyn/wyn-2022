#include<stdio.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	if (m % n == 0 || n % m == 0) {
		printf("%d\n", m < n ? m : n);
		return 0;
	}
	int max = 0;
	int i = 2;
	while (i < (m < n ? m : n)) {
		if (m % i == 0 && n % i == 0)
			max = i;
		i++;
	}
	printf("%d\n", max);
	return 0;
}
