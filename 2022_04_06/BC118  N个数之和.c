#include<stdio.h>
int main() {
	int n;
	int arr[51] = { 0 };
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	for (int j = 0; j < n; j++) {
		sum += arr[j];
	}
	printf("%d", sum);
	return 0;
}
