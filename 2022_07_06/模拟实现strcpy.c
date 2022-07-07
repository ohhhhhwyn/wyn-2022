char* my_strcpy(char* dest, const char* src) {
	assert(dest && src);
	char* ans = dest;
	while (*dest++ = *src++);
	return ans;
}

int main()
{
	char arr[20];
	const char* p = "hello world!";
	printf("%s\n", my_strcpy(arr, p));

	system("pause");
	return 0;
}
