#include<stdio.h>
int main() {
	char ch1[10] = { 0 };
	char ch2[10] = { 0 };
	while (~scanf("%s %s", ch1, ch2)) {
		if (strcmp(ch1, "admin") == 0&&strcmp(ch2,"admin")==0)
			printf("Login Success!\n");
		else
			printf("Login Fail!\n");
	}
	return 0;
}