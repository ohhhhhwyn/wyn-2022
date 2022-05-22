#include <stdio.h>
int main()
{
    float a;
    int b, c, d;
    scanf("%f %d %d %d", &a, &b, &c, &d);
    float ret = 0;
    if(b == 11)
    {
        if(d == 1)
            ret = a * 0.7 - 50;
        else
            ret = a * 0.7;
    }
    else
    {
        if(d == 1)
            ret = a * 0.8 - 50;
        else
            ret = a * 0.8;
    }
    printf("%.2f\n", ret < 0 ? 0 : ret);
    return 0;
}