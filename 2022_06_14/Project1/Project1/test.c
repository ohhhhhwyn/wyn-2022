#pragma warning(disable:4996)
#include <stdio.h>
int Number_of_soda(int money) {
	int soda_total = money;
	int soda_empty = money;
	while (soda_empty != 1) {
		soda_total += soda_empty / 2;
		soda_empty = soda_empty / 2 + soda_empty % 2;
	}
	return soda_total;
}
int main()
{
	int money = 0;
	while (~scanf("%d", &money)) {
		printf("%d\n", Number_of_soda(money));
	}
	return 0;
}