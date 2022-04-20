#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main() {
	srand(time(NULL));
	int rand_val = rand() % 7;
	switch (rand_val) {
	case 0:printf("大吉\n"); break;
	case 1:printf("中吉\n"); break;
	case 2:printf("小吉\n"); break;
	case 3:printf("吉\n"); break;
	case 4:printf("末吉\n"); break;
	case 5:printf("凶\n"); break;
	case 6:printf("大凶\n"); break;
	default:break;
	}
	return 0;
}