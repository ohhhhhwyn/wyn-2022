/********** Begin **********/
#include<stdio.h>
#define M 9
#define N 9
int main()
{
    int m = 0, n = 0;
    char arr[M][N] = { 0 };
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf(" %c", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            printf("%c", arr[j][i]);
        }
    }
    return 0;
}
/********** End **********/