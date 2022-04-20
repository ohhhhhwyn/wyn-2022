#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            for(int k=1;k+i<=n;k++)
                printf("   ");
            for(int l=i;l>0;l--){
                switch(j){
                    case 1:printf("  *   ");break;
                    case 2:printf(" * *  ");break;
                    case 3:printf("* * * ");break;
                    default:break;
                }
            }
            printf("\n");
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            printf("   ");
        }
        printf("  *\n");
    }
    return 0;
}