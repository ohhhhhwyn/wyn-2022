#include<stdio.h>
int my_strlen_d(char* str)
{
	if ('\0' == *str)
	{
		return 0;
	}
	return 1 + my_strlen_d(++str);
}
int my_strlen(char* str)
{
	int len = 0;
	while (*str != '\0')
	{
		++len;
		++str;
	}
	return len;
}
int main()
{
	char str[] = "abcdef";
	int len1 = my_strlen_d(str);
	printf("%d\n", len1);
	int len2 = my_strlen(str);
	printf("%d\n", len2);
	return 0;
}