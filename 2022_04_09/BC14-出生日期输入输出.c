#include<stdio.h>
int main(){
    int year,month,date;
    scanf("%4d%2d%2d",&year,&month,&date);
    printf("year=%d\nmonth=%02d\ndate=%02d\n",year,month,date);
    return 0;
}