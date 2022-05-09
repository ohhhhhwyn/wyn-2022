#include<stdio.h>
#include<math.h>
int main()
{
    int a = 0, b = 0, c = 0;
    while(~scanf("%d %d %d", &a, &b, &c))
    {
        if(((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))
        {
            printf("Not a triangle!\n");
        }
        else
        {
            if(a == b && b == c)
            {
                printf("Equilateral triangle!");
            }
            else if((a == b ) || (a == c) || (b == c))
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
    }
    return 0;
}