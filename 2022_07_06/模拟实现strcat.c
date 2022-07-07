char* my_strcat(char* dest, const char* src) {
	assert(dest && src);
	char* ans = dest;
	while (*dest) {
		dest++;
	}
	while (*dest++ = *src++);
	return ans;
}

int main()
{
	char arr[20] = "hello ";
	const char* p = "world!";
	printf("%s\n", my_strcat(arr, p));

	system("pause");
	return 0;
}