#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	int i, j, k;
	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	for (i = 0, j = 0; i < n; i++) {
		int count = 0;
		for (k = 0; k < n; k++) {
			if (arr2[k] != arr1[i])
				count++;
		}
		if (count == n) {
			arr2[j] = arr1[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
		printf("%d ", arr2[i]);
	return 0;
}