#include<stdio.h>
int main()
{
    int a=2019;
    int count=0;
    for(int i=1;i<=a;i++)
    {
        if(i%10==9||i/10%10==9||i/100%10==9)
            count++;
    }
    printf("%d",count);
    return 0;
}