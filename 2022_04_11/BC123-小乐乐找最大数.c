#include<stdio.h>
int main() {
	int num;
	int max = 0;
	int arr[4] = { 0 };
	for (int i = 0; i < 4;i++) {
		scanf("%d", &num);
		if (max <= num)
			max = num;
	}
	printf("%d", max);
	return 0;
}