#include <stdio.h>
#include <string.h>
void reverse(char* str, int left, int right) {
	while (left < right) {
		char tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}
}
void rotate(char* str) {
	int len = strlen(str);
	reverse(str, 1, len - 1);
	reverse(str, 0, len - 1);
}
int judge(const char* s1, char* s2) {
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (0 == len1 && 0 == len2) {
		return 1;
	}
	int flag = 0;
	for (int i = 0; i < len2; i++) {
		if (0 == strcmp(s1, s2) && 0 == flag) {
			flag = 1;
		}
		rotate(s2);
	}
	return flag;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	if (judge(s1, s2)) {
		printf("是\n");
	}
	else {
		printf("否\n");
	}
	return 0;
}