#include<stdio.h>
int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int count = 0;
    for(int i = 0; i < 32; ++i)
    {
        count += ((m ^ n) >> i) & 1;
    }
    printf("%d\n", count);
    return 0;
}