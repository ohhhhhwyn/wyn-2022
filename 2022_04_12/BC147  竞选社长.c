#include<string.h>
#include<stdio.h>
int main(){
    char ch;
	int count_A = 0;
	int count_B = 0;
	while (~scanf("%c", &ch)) {
		if (ch == 'A')
			count_A++;
		if (ch == 'B')
			count_B++;
		if (ch == '0')
			break;
	}
	if (count_A == count_B)
		printf("E\n");
	else
		printf("%c\n", count_A > count_B ? 'A' : 'B');
    return 0;
}