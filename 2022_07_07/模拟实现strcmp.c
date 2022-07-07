#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

int my_strcmp(const char* string1, const char* string2) {
	assert(string1 && string2);
	while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2) {
		string1++;
		string2++;
	}
	return *string1 - *string2;
}

int main()
{
	char* p1 = "hello";
	char* p2 = "hello";

	if (0 == my_strcmp(p1, p2)) {

		printf("==\n");
	}

	system("pause");
	return 0;
}