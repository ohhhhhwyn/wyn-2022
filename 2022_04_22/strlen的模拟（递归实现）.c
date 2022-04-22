#include<stdio.h>
int recursive(char* str)
{
	if (*str != '\0')
	{
		return 1 + recursive(str + 1);
	}
	else
	{
		return 0;
	}
}
int non_recursive(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char* str = "abcdefg";
	int ret1 = recursive(str);
	printf("%d\n", ret1);
	int ret2 = non_recursive(str);
	printf("%d\n", ret2);
	return 0;
}