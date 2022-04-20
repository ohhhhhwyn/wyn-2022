#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char arr[5000] = { 0 };
    gets(arr);
    printf("%c", toupper(arr[0]));
    int len = strlen(arr);
    int i = 0;
    for (i = 1; i < len - 1; i++)
    {
        if (arr[i] == ' ' )
            printf("%c", toupper(arr[i + 1]));
    }
    return 0;
}