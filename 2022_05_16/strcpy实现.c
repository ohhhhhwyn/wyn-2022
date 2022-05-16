#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* strDestination, const char* strSource)
{
	assert(strDestination);
	assert(strSource);
	char* result = strDestination;
	while (*strDestination++ = *strSource++)
	{
		;
	}
	return result;
}
int main()
{
	char dest[20];
	char* src = "hello world!";
	printf("%s\n", my_strcpy(dest, src));
	return 0;
}