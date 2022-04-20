#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c) 
		printf("%d %d %d", a,(b>c?b:c),(b<c?b:c));
	if (b >= a && b >= c) 
		printf("%d %d %d", b,(a>c?a:c),(a<c?a:c));
	if (c >= a && c >= b) 
		printf("%d %d %d", c,(a>b?a:b),(a<b?a:b));
	return 0;
}