
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int arr[100] = { 0 };
	int i;
	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	int num;
	scanf("%d", &num);
	int count = 0;
	for (i = 0; i < n; i++) {
		if (num == arr[i])
			count++;
	}
	printf("%d",count);
	return 0;
}