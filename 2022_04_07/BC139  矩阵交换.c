#include<stdio.h>
int main() {
	int m, n, i, j, k, p, q;
	char ch;
	int arr[10][10] = { 0 };
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &arr[i][j]);
	scanf("%d", &k);
	while(k){
		getchar();
		scanf("%c %d %d", &ch,&p, &q);
		if (ch == 'r') {
			for (j = 0; j < n; j++) {
				int tmp = arr[p - 1][j];
				arr[p - 1][j] = arr[q - 1][j];
				arr[q - 1][j] = tmp;
			}
		}
		if (ch == 'c') {
			for (j = 0; j < n; j++) {
				int tmp = arr[j][p - 1];
				arr[j][p - 1] = arr[j][q - 1];
				arr[j][q - 1] = tmp;
			}
		}
		k--;
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}