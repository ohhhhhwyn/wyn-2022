#include<stdio.h>
int main()
{
    int n = 0, m = 0;
    while(~scanf("%d %d", &n, &m))
    {
        if(4 == m || 6 == m || 9 == m || 11 == m)
        {
            printf("30\n");
        }
        else if(2 == m)
        {
            if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
            {
                printf("29\n");
            }
            else 
            {
                printf("28\n");
            }
        }
        else
        {
            printf("31\n");
        }

    }
    return 0;
}