#include<stdio.h>
#define M 3
main()
{
	int a[M],i;
	int *max,*min;
	for(i=0 ;i<M; i++)
	{
		scanf("%d",&a[i]);
	}
     /***** 将指针变量max,min初始化 *****/
	/********** Begin **********/
    max=a;
    min=a;
    /********** End **********/
	/***** 将每个数组元素依次与max,min指向的数组元素比较，使max,min分别指向的最大、最小的数组元素 *****/
	/********** Begin **********/
    for(i=0;i<M;i++){
		if(*max<a[i])
		max=&a[i];
		if(*min>a[i])
		min=&a[i];
	}
    /********** End **********/
	/***** 通过指针变量max,min输出最大值和最小值 *****/
	/********** Begin **********/
    printf("min=%d\nmax=%d\n",*min,*max);
    /********** End **********/
	return 0;
}
