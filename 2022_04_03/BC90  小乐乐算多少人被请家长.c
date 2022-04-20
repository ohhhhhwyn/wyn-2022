#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int cn,math,en;
    int count=0;
    int i=0;
    for(;i<n;i++)
    {
        scanf("%d %d %d",&cn,&math,&en);
        if((cn+math+en)/3.0<60)
            count++;
    }
    printf("%d",count);
    return 0;
}