#include<stdio.h>
int main()
{
    double score=0;
    double sum=0;
    double max=0;
    double min=100;
    int num=0;
    while(~scanf("%lf",&score))
    {
        num++;
        sum+=score;
        if(max<=score)
        {
            max=score;
        }
        if(min>=score)
        {
            min=score;
        }
        if(num==7)
        {
            printf("%.2lf\n",(sum-max-min)/5.0);
            score=0;
            sum=0;
            max=0;
            min=100;
            num=0;
        }
    }
    return 0;
}


