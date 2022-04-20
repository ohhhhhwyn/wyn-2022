#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[19][19] = { 0 };
	int count = 0;
	int start = 0;
	int end = n - 1;
	int i, j;
	while (count < n * n) {
		for (i = start; i <= end; i++)
			arr[start][i] = ++count;
		for (i = start+1; i <= end; i++)
			arr[i][end] = ++count;
		for (i = end-1; i >= start; i--)
			arr[end][i] = ++count;
		for (i = end-1; i > start; i--)
			arr[i][start] = ++count;
		start++;
		end--;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}