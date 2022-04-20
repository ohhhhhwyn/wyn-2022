#include<stdio.h>
int main() {
	int n;
	int arr[101] = { 0 };
	int max = 0;
	int min = 100;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (max <= arr[i])
			max = arr[i];
		if (min >= arr[i])
			min = arr[i];
	}
	printf("%d", max - min);
}