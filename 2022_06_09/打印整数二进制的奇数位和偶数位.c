#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("偶数位：");
    for (int i = 31; i >= 0; i -= 2) {
        printf("%d ", ((num >> i) & 1));
    }
    printf("\n");
    printf("奇数位：");
    for (int i = 30; i >= 0; i -= 2) {
        printf("%d ", ((num >> i) & 1));
    }
    return 0;
}