#pragma warning(disable:4996)
#include <Windows.h>
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* destination, const char* source) {
	assert(destination != NULL);
	assert(source != NULL);
	char* ans = destination;
	while (*destination++ = *source++) {
		;
	}
	return ans;
}
int main()
{
	char* source = "hello world!";
	char destination[20];
	printf("%s\n", my_strcpy(destination, source));
	system("pause");
	return 0;
}