#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i;
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < n-1; i++) {
		if (arr[i] <= arr[i + 1])
			count1++;
		if (arr[i] >= arr[i + 1])
			count2++;
	}
	if (count1 == n - 1 || count2 == n - 1)
		printf("sorted");
	else
		printf("unsorted");
	return 0;
}