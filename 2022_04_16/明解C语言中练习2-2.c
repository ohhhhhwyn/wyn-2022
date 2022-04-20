#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main() {
	char s[] = "hello world";
	int s_len = strlen(s);
	for (int i = 0; i < s_len; i++) {
		printf("\r");
		putchar(s[i]);
		Sleep(1000);
	}
	return 0;
}