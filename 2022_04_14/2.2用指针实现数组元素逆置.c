#include<stdio.h>
#define N 12
main()
{
	int *i, *j,a[N],t;
    for(t=0;t<=N-1;t++)
	{
		scanf("%d",&a[t]);
	}
    
	/*********依次交换首尾数组元素*********/
	i=a;
	j=&a[N-1];
	for(t=0;t<N/2;t++){
		int tmp=*i;
		*i=*j;
		*j=tmp;
		i++;
		j--;
	}
  
	for(t=0;t<N;t++)
	{
	    printf("%d ",a[t]);
	}
	return 0;	
}
