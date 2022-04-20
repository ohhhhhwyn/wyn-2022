#include <stdio.h>
int main()
{
	int a[10],*p;	
	/*****输入10个整数存入数组a *****/   
    for(  p=a;p<a+10;p++     )          
	{
		scanf("%d",p);
	}
        
	/*****输出数组a 的所有数组元素的值*****/
   for(p=a;p<a+10;p++)
	   printf("%d ",*p);
   
	printf("\n");
	return 0;
}
