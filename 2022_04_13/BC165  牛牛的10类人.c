#include<stdio.h>
int judge(int s){
    int m=0,n=0;//m统计0，n统计1
    while(s!=0){
        if(s%2==0){
            m++;
        }else{
            n++;
        }
        s=s/2;
    }
    if(m%2==0&&n%2==0){
            printf("10 ");
    }else if(m%2!=0&&n%2!=0){
            printf("100 ");
    }else if(m%2==0&&n%2!=0){
            printf("0 ");
    }else{
            printf("1 ");
    }
    return 0;
}
int main(){
    int t,i;//t表示个数
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++){
        scanf(" %d",&a[i]);
    }
    for(i=0;i<t;i++){
       judge(a[i]);
    }
}
