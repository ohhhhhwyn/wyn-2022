#include<stdio.h>
int main() {
	double num;
	scanf("%lf", &num);
	printf("%.3lf", 4.0 / 3 * 3.1415926 * num * num * num);
	return 0;
}