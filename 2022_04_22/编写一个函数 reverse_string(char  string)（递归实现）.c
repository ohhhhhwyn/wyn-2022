#include<stdio.h>
void reverse_string(char* string)
{
	if (*string != '\0')
	{
		reverse_string(string + 1);
	}
	printf("%c", *string);
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	return 0;
}