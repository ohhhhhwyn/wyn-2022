#include<stdio.h>
int main()
{
    char ch = 0;
    while(~scanf(" %c", &ch))
    {
        if(65 <= ch && ch <= 90)
        {
            printf("%c\n", ch + 32);
        }
        else if(97 <= ch && ch <= 122)
        {
            printf("%c\n", ch - 32);;
        }
    }
    return 0;
}