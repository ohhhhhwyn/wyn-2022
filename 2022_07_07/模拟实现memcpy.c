#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t count) {
	assert(dest && src);
	void* ans = dest;
	while (count--) {
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ans;
}

int main()
{
	char p1[] = "aaaaaaaaaaaaaa";
	char p2[] = "bbbbb";

	my_memcpy(p1, p2, 5);

	printf("%s\n", p1);

	system("pause");
	return 0;
}