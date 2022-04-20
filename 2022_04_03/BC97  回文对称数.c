#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        int j=i;
        while(j)
        {
            int k=j%10;
            sum=sum*10+k;
            j/=10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
        sum=0;
    }
    return 0;
}