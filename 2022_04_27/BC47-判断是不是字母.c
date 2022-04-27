#include<stdio.h>
int main()
{
    char ch = 0;
    while(~scanf(" %c", &ch))
    {
        if(65 <= ch && ch <= 90 || 97 <= ch && ch <= 122)
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}