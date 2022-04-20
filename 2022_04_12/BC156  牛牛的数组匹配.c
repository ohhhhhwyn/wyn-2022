#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int sum = 0;
	int min = 999999;
	int i, j, x, y;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
		sum += arr1[i];
	}
	for (i = 0; i < m; i++)
		scanf("%d", &arr2[i]);
	if (m == 1) {
		printf("%d", arr2[0]);
		return 0;
	}
	for (i = 0; i < m - 1; i++) {
		int k = i;
		int sumn = 0;
		for (j = i + 1; j < m; j++) {
			while (k <= j) {
				sumn += arr2[k];
				k++;
			}
			if (min > abs(sumn - sum)) {
				min = abs(sumn - sum);
				x = i;
				y = j;
			}
			k = i;
			sumn = 0;
		}
	}
	for (i = x; i <= y; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}