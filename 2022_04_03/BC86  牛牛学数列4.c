#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int tmp=0;
    int sum=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        tmp+=i;
        sum+=tmp;
    }
    printf("%d",sum);
    return 0;
}