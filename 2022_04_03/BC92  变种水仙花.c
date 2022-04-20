#include<stdio.h>
int main()
{
    int i;
    for(i=10000;i<=99999;i++)
    {
        if((i%10)*(i/10)+
           (i%100)*(i/100)+
           (i%1000)*(i/1000)+
           (i%10000)*(i/10000)==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}