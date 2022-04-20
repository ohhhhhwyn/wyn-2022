#include<Windows.h>
#include<time.h>
#include<stdio.h>
int main() {
	clock_t start = clock();
	for (int i = 1; i < 10; i++) {
		printf("%*d\n", i, i);
		Sleep(1000);
	}
	clock_t end = clock();
	printf("%f", (double)(end - start) / CLOCKS_PER_SEC/3600);
	return 0;
}