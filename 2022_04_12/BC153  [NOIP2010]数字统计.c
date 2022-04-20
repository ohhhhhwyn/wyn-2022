int hanshu(int n) {
	int num = 0;
	while (n) {
		if (n % 10 == 2)
			num++;
		n /= 10;
	}
	return num;
}
#include<stdio.h>
int main() {
	int L, R;
	scanf("%d %d", &L, &R);
	int ret = 0;
	for (int i = L; i <= R; i++)
		ret+=hanshu(i);
	printf("%d", ret);
	return 0;
}