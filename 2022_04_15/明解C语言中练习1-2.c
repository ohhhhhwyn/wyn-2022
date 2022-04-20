#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main() {
	srand(time(NULL));
	int rand_val = rand() % 11;
	if (0 <= rand_val && rand_val <= 1)
		printf("大吉\n");
	else if (2 <= rand_val && rand_val <= 3)
		printf("中吉\n");
	else if (4 <= rand_val && rand_val <= 5)
		printf("小吉\n");
	else if (6 <= rand_val && rand_val <= 7)
		printf("吉\n");
	else if (8==rand_val )
		printf("末吉\n");
	else if (9 == rand_val)
		printf("凶\n");
	else if (10 == rand_val)
		printf("大凶\n");
	return 0;
}