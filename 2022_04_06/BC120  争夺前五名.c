#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[50] = { 0 };
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n-1; i++) {
		int MaxIndex = i;
		for (int j = 1 + i; j < n; j++) {
			if (arr[MaxIndex] < arr[j])
				MaxIndex = j;
		}
		int tmp = arr[MaxIndex];
		arr[MaxIndex] = arr[i];
		arr[i] = tmp;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}