#include <stdio.h>
int main()
{
    int n = 0;
    while(~scanf("%d", &n))
    {
        for(int i = 1; i <= n; ++i)
        {
            for(int j = i; j < n; ++j)
            {
                printf("  ");
            }
            for(int k = i; k > 0; --k)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}