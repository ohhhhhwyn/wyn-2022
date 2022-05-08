/********** Begin **********/
#include<stdio.h>
#include<limits.h>
#define M 9
#define N 9
int main()
{
    int m = 0, n = 0;
    int arr[M][N] = { 0 };
    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("原矩阵：\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < m; ++i)
    {
        int Max = INT_MIN;
        int MaxIndex = 0;
        for(int j = 0; j < n; ++j)
        {
            if(Max < arr[i][j])
            {
                Max = arr[i][j];
                MaxIndex = j;
            }
        }
        int tmp = arr[i][0];
        arr[i][0] = arr[i][MaxIndex];
        arr[i][MaxIndex] = tmp;
    }
    printf("处理后：\n");
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/********** End **********/