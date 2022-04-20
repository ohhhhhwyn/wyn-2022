#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	int a[1000] = { 0 };
	int i;
	int max = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		if ((int)sqrt(a[i]) != sqrt(a[i]))
			if (max <= a[i])
				max = a[i];
	printf("%d\n", max);
	return 0;
}