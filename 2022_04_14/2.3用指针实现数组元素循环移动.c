#include <stdio.h>
#define N 20
int main()
{
	int a[N];
	int i,n,m,t; 
	int *p,*q;	
	scanf("%d",&n);   //输入整数个数
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p = a;
	scanf("%d",&m);   //输入移动位数
	/***** 首先逆置数组前m个元素 *****/
	q=&a[m-1];
    for(i=0;i<m/2;i++){
		int tmp=*p;
		*p=*q;
		*q=tmp;
		p++;
		q--;
	}
	/***** 逆置余下n-m个元素 *****/
	p=&a[m];
	q=&a[n-1];
	for(i=0;i<(n-m)/2;i++){
		int tmp=*p;
		*p=*q;
		*q=tmp;
		p++;
		q--;
	}
	/***** 逆置整个数组 *****/
	p=a;
	q=&a[n-1];
	for(i=0;i<n/2;i++){
		int tmp=*p;
		*p=*q;
		*q=tmp;
		p++;
		q--;
	}

	for(i=0;i<n;i++)
	{  
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}