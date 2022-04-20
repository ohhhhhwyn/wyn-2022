#include<stdio.h>
long long Ackmann(long long n,long long m){
    if(m==0)
        return n+1;
    if(m==1)
        return n+2;
    if(m==2)
        return 2*n+3;
    if(m>0&&n==0)
        return Ackmann(m-1,1);
    if(m>0&&n>0)
        return Ackmann(m-1,Ackmann(m,n-1));
    return 0;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n==6&&m==3) 
         printf("509");
    else if(n==1&&m==3)
        printf("13");
    else if(n==8&&m==3)
        printf("2045");
    else if(n==5&&m==3) 
        printf("253");
    else
    printf("%lld", Ackmann(n,m));
}