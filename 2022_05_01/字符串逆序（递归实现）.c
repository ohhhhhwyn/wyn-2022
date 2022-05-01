#include<stdio.h>
int my_strlen(char* string)
{
	while ('\0' == *string)
	{
		return 0;
	}
	return 1 + my_strlen(++string);
}
void reverse_string(char* string)
{
	int length = my_strlen(string);
	char tmp = *string;
	*string = *(string + length - 1);
	*(string + length - 1) = '\0';
	if (my_strlen(string + 1) >= 2)
	{
		reverse_string(string + 1);
	}
	*(string + length - 1) = tmp;
}
int main()
{
	char arr[] = "abcdef";
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("Before:");
	for (int i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	reverse_string(arr);
	printf("\nAfter :");
	for (int i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}