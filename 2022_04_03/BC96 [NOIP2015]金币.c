#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    int i;
    for(i=1;count<n;i++)
    {
        int j;
        for(j=1;j<=i&&count<n;j++)
        {
            sum+=i;
            count++;
        }
    }
    printf("%d",sum);
    return 0;
}
