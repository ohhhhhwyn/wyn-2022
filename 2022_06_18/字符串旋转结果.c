#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
void reverse(char* str2, int left, int right) {
	while (left < right) {
		char tmp = str2[left];
		str2[left++] = str2[right];
		str2[right--] = tmp;
	}
}
void rotate(char* str) {
	int len = (int)strlen(str);
	reverse(str, 1, len - 1);
	reverse(str, 0, len - 1);
}
int judge(const char* str1, char* str2) {
	int flag = 0;
	for (int i = 0; i < (int)strlen(str2); i++) {
		if (strcmp(str1, str2) == 0 && flag == 0) {
			flag = 1;
		}
		rotate(str2);
	}
	return flag;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	if (judge(str1, str2)) {
		printf("Yes!\n");
	}
	else {
		printf("No\n");
	}
	system("pause");
	return 0;
}