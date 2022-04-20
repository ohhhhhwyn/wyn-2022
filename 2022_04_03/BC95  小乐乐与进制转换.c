#include<stdio.h> 
int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[10]={0};
    int i=0;
    while(n)
    {
        arr[i++]=n%6;
        n/=6;
    }
    while(i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}


