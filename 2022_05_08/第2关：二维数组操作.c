/********** Begin **********/
#include<stdio.h>
#define N 9
int main()
{
    int n = 0;
    int arr[N][N] = { 0 };
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &arr[i][j]);
            if(j <= i)
            {
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
/********** End **********/