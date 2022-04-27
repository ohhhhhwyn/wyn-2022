#include<stdio.h>
int main()
{
    for(int i = 10000; i < 100000; i++)
    {
        int sum = 0;
        int k = 1;
        for(int j = 0; j < 4; j++)
        {
            k *= 10;
            sum += (i % k) * (i / k);
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}