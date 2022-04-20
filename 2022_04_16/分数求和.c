#include<stdio.h>
int main() {
	double sum = 0.0;
	int symbol = -1;
	for (int i = 1; i <= 100; i++) {
		symbol *= -1;
		sum += 1.0 * symbol / i;
	}
	printf("%f", sum);
	return 0;
}