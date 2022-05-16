#include <stdio.h>
#include <assert.h>
int my_strlen(const char* string)
{
	assert(string);
	int sum = 0;
	while (*string++)
	{
		++sum;
	}
	return sum;
}
int main()
{
	char* str = "hello world!";
	int length = my_strlen(str);
	printf("%d\n", length);
	return 0;
}