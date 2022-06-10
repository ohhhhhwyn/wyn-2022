#include <stdio.h>
int	my_pow(int n, int power) {
	int ans = 1;
	for (int i = 0; i < power; i++) {
		ans *= n;
	}
	return ans;
}
int Daffodil_number(int n) {
	int power = 0;
	int tmp = n;
	while (tmp) {
		tmp /= 10;
		power++;
	}
	int ans = 0;
	tmp = n;
	for (int i = 0; i < power; i++) {
		ans += my_pow(tmp % 10, power);
		tmp /= 10;
	}
	if (ans == n) {
		return 1;
	}
	return 0;
}
int main()
{
	for (int i = 0; i < 100000; i++) {
		if (Daffodil_number(i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}