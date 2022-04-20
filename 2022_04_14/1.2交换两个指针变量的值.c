#include <stdio.h>
int main()
{ 
	int a=100,b=200;
	int *p1, *p2, *p;
	p1=&a;
	p2=&b;
	scanf("%d%d",p1,p2);
	 /***** 交换p1、p2的值 *****/
	/********** Begin **********/
    int tmp=*p1;
	*p1=*p2;
	*p2=tmp;
    /********** End **********/   
    printf("%d %d\n",*p1,*p2);
	return 0;
}
