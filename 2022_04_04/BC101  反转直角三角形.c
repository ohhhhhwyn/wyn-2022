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
            for(j=n-i;j>0;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}