#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
void reverse(char* str, int left, int right) {
	while(left < right) {
		char tmp = str[left];
		str[left++] = str[right];
		str[right--] = tmp;
	}
}
void func(char* str, int k) {
	int len = (int)strlen(str);
	k %= len;
	reverse(str, 0, k - 1);
	reverse(str, k, len - 1);
	reverse(str, 0, len - 1);
}
int main()
{
	char str[] = "ABCD";
	printf("before: %s\n", str);
	func(str, 3);
	printf(" after: %s\n", str);
	system("pause");
	return 0;
}