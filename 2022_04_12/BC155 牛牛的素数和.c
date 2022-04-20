#include<stdio.h>
#include<math.h>
int Prime(int num) {
	if (num == 1)
		return 0;
	for (int i = 2; i <=sqrt(num); i++) 
		if (num % i == 0)
			return 0;
	return num;
}
int main() {
	int l, r;
	scanf("%d %d", &l, &r);
	int sum = 0;
	for (int i = l; i <= r; i++) 
		sum += Prime(i);
	printf("%d", sum);
	return 0;
}