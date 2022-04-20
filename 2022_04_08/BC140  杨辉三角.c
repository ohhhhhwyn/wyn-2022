#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[30][30] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
            printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}