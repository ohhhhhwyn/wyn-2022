
#include<stdio.h>
#include<Windows.h>
int main() {
	char s[] = "hello world";
	int s_len = strlen(s);
	int cnt = 0;
	int dir = 1;
	while (1) {
		putchar('\r');
		for (int i = 0; i < s_len; i++) {
			if (i + cnt < s_len) {
				putchar(s[i + cnt]);
			}
			else {
				putchar(s[i + cnt - s_len]);
			}
		}
		Sleep(100);
		if (1 == dir) {
			if (cnt < s_len - 1)
				cnt++;
			else
				cnt = 0;
		}
		else
		{
			if (cnt > 0)
				cnt--;
			else
				cnt = s_len - 1;
		}
	}
	return 0;
}