#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[100] = { 0 };
	int i, j;
	for (i = 0, j = 0; i < n - 1; i++, j++) {
		arr[j] = i + 2;
	}
	int k;
	int count = 0;
	for (k = 2; k < n; k++) {
		for (i = k-1; i < j; i++) {
			if (arr[i] % k == 0&&arr[i]!=0) {
				arr[i] = 0;
				count++;
			}
		}
	}
	for (i = 0; i < n - 1; i++) {
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
	printf("\n%d", count);
	return 0;
}