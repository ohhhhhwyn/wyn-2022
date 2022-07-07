#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

char* my_strstr(const char* string, const char* strCharSet) {
	assert(string && strCharSet);
	const char* pstart = string;
	while (*pstart) {
		const char* s1 = pstart;
		const char* s2 = strCharSet;
		while (*s1 != '\0' && * s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return (char*)pstart;
		}
		pstart++;
	}
	return NULL;
}

int main()
{
	char* p1 = "hhhhelloooo";
	char* p2 = "hello";

	printf("%s\n", my_strstr(p1, p2));

	system("pause");
	return 0;
}