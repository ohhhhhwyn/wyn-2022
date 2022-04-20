#include<stdio.h>
#include<math.h>
int IsPrime(int num) {
	if (num > 1 && num <= 3)
		return 1;
	if (num % 6 != 1 && num % 6 != 5)
		return 0;
	for (int i = 5; i <= sqrt(num); i += 6) {
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;
	}
	return 1;
}
int main() {
	int i = 100;
	while (i <= 200) {
		if (IsPrime(i))
			printf("%d ", i);
		i++;
	}
	return 0;
}