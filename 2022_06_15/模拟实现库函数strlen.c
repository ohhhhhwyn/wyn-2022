#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str) {
	assert(str != NULL);
	int ans = 0;
	while (*str != NULL) {
		ans++;
		str++;
	}
	return ans;
}
int main()
{
	char* str = "hello world!";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}