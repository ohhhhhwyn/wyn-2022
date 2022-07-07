#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count) {
	assert(dest && src);
	char* ans = dest;
	(char*)dest += count - 1;
	(char*)src += count - 1;
	while (count--) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest -1;
		src = (char*)src -1;
	}
	return ans;
}

int main()
{
	char p1[] = "123456789";

	my_memmove(p1+2, p1, 5);

	printf("%s\n", p1);

	system("pause");
	return 0;
}