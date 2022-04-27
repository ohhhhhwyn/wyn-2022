#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);
    return 0;
}