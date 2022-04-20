#include<limits.h>
#include<stdio.h>
int main() {
	int n;
	int max = INT_MIN;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (max < n)
			max = n;
	}
	printf("%d", max);
	return 0;
}