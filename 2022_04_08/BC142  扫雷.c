#include<stdio.h>
#include<stdlib.h>
int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	char* p = (char*)calloc((m + 2) * (n + 2), sizeof(char));
	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
			scanf(" %c ", p + i * (n + 2) + j);
	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (*(p + i * (n + 2) + j) == '*')
				printf("*");
			else {
				int num = 0;
				for (int si = i - 1; si <= i + 1; si++) {
					for (int sj = j - 1; sj <= j + 1; sj++) {
						if (*(p + si * (n + 2) + sj) == '*')
							num++;
					}
				}
				printf("%d", num);
			}
		}
		printf("\n");
	}
	return 0;
}