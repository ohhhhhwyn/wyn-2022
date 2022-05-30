#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
void reserve(char* str, int left, int right) {
	while (left < right) {
		int tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}
}
void rotate(char* str, int len, int k) {
	k %= len;
	reserve(str, 0, k - 1);
	reserve(str, k, len - 1);
	reserve(str, 0, len - 1);
}
int main() 
{
	char str[] = "ABCD";
	int len = strlen(str);
	int k = 0;
	printf("输入旋转字符数：>");
	scanf("%d", &k);
	rotate(str, len, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}