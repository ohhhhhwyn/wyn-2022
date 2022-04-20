#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n)
        {
            printf("*");
            n--;
        }
        printf("\n");
    }
    return 0;
}