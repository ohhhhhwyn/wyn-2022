#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int i;
        for(i=0;i<n;i++)
        {
            int j;
            for(j=0;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}