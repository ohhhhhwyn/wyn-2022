#include<string.h>
#include<stdio.h>
int main() {
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	int i, j;
	int maxn = 0, minn = 100;
	for (i = 0; i < len; i++) {
		int sum = 0;
		for (j = 0; j < len; j++)
			if (arr[i] == arr[j])
				sum++;
		if (maxn < sum)
			maxn = sum;
		if (minn > sum)
			minn = sum;
	}
	int ret = maxn - minn;
	if (ret <= 1) {
		printf("No Answer\n0");
		return 0;
	}
	if (ret == 2) {
		printf("Lucky Word\n%d", ret);
		return 0;
	}
	int pos=0;
	for (i = 2; i < ret; i++)
		if (ret % i == 0)
			pos = 1;
	if (pos == 0)
        printf("Lucky Word\n%d", ret);
	else
		printf("No Answer\n0");
	return 0;
}