#include<stdio.h>
int main() {
	int n;
	char a1, a2, a3, a4;
	char arr[10] = { 0 };
	scanf("%d %c %c %c %c", &n, &a1, &a2, &a3, &a4);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &arr[i]);
		if (arr[i] == a1)
			arr[i] = a2;
		if (arr[i] == a3)
			arr[i] = a4;
	}
	for (int i = 0; i < n; i++)
		printf("%c", arr[i]);
	return 0;
}