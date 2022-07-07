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

int main()
{
	char* p = "hello world!";
	printf("%d\n", my_strlen1(p));
	printf("%d\n", my_strlen2(p));
	printf("%d\n", my_strlen3(p));

	system("pause");
	return 0;
}