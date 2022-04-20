#include<stdio.h>
int main() {
	int n, m, a, b, i, j;
	int arr[5][5] = { 0 };
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) 
			scanf("%d", &arr[i][j]);
	}
	scanf("%d %d", &i, &j);
	printf("%d", arr[i-1][j-1]);
	return 0;
}