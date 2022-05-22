#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10] = { 0 };
    int ret = 0;
    int x = 0;
    for(int i = 1; n; i *= 10)
    {
        if((n % 10) % 2 == 0)
            x = 0;
        else
            x = 1;
        ret += x * i;
        n /= 10;
    }
    printf("%d\n", ret);
    /*
    int i = 0; 
    while(n)
    {
        if((n % 10) % 2 == 0)
            arr[i++] = 0;
        else
            arr[i++] = 1;
        n /= 10;
    }
    while(i)
    {
        if(arr[--i])
        {
            printf("%d", arr[i]);
            while(i)
            {
                printf("%d", arr[--i]);
            }
        }
    }
    */
    return 0;
}