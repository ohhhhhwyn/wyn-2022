int max3(int a, int b, int c) {
	int ret = a > b ? a : b;
	return ret > c ? ret : c;
}
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int ret1 = max3(a + b, b, c);
	int ret2 = max3(a, b + c, c);
	int ret3 = max3(a, b, b + c);
	double ret = ret1*1.0 / (ret2*1.0 + ret3*1.0);
	printf("%.2lf", ret);
	return 0;
}