#include<stdio.h>
int main()
{
    int x = 0;
    scanf("%d",&x);
    if(x<0) printf("1");
    else if(x==0) printf("0");
    else printf("-1");
    return 0;
}