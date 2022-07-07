#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>
#include <assert.h>
size_t my_strlen1(const char* string) {
	assert(string);
	size_t ans = 0;
	while (*string++) {
		ans++;
	}
	return ans;
}

size_t my_strlen2(const char* string) {
	assert(string);
	const char* after = string;
	while (*after++);
	return after - string - 1;
}

size_t my_strlen3(const char* string) {
	assert(string);
	if (*string) {
		return my_strlen3(string + 1) + 1;
	}
	return 0;
}

char* my_strcpy(char* dest, const char* src) {
	assert(dest && src);
	char* ans = dest;
	while (*dest++ = *src++);
	return ans;
}

char* my_strcat(char* dest, const char* src) {
	assert(dest && src);
	char* ans = dest;
	while (*dest) {
		dest++;
	}
	while (*dest++ = *src++);
	return ans;
}

int main()
{
	char arr[20] = "hello ";
	const char* p = "world!";
	printf("%s\n", my_strcat(arr, p));

	system("pause");
	return 0;
}