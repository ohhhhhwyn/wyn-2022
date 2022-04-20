#include<stdio.h>
int main() {
	char arr[20] = { 0 };
	char new_arr[20] = { 0 };
	gets(arr);
	int len = strlen(arr);
	int i, j, count = 0;
	for (i = 0, j = len - 1; j >= 0; i++) {
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = arr[j]; i++; j--;
		new_arr[i] = ','; count++;
	}
	for (i = len + count - 2; i >=0; i--)
		printf("%c", new_arr[i]);
	return 0;
}