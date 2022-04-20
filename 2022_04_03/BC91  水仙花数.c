#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    while (~scanf("%d %d", &m, &n))
    {
        int count = 0;
        for (; m <= n; m++)
        {
            int ge = 1;
            int shi = 1;
            int bai = 1;
            for (int i = 0; i < 3; i++)
            {
                ge *= m % 10;
                shi *= m / 10 % 10;
                bai *= m / 100;
            }
            if (ge + shi + bai == m)
            {
                printf("%d ", m);
                count++;
            }
        }
        if (count == 0)
        {
            printf("no\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}