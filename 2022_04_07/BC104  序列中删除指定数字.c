#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int num;
	scanf("%d", &num);
	int count = 0;
	for (i = 0; i < n; i++) {
		if (num == arr[n - 1]) {
			n--;
			i = 0;
		}
		else
			break;
	}
	for (i = 0; i < n; i++) {
		if (num == arr[i]) {
			int j;
			for (j = i; j < n - 1; j++)
				arr[j] = arr[j + 1];
			count++;
			i = -1;
		}
	}
	for (i = 0; i < n-count; i++)
		printf("%d ", arr[i]);
	return 0;
}