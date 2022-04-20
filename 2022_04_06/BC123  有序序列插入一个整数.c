#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int num;
	scanf("%d", &num);
	for (i = 0; i < n; i++) {
		if (num <= arr[i]) {
			int j;
			for (j = n - 1; j >= i; j--) {
				arr[j + 1] = arr[j];
			}
			arr[i] = num;
			break;
		}
		else {
			arr[n] = num;
		}
	}
	for (i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}