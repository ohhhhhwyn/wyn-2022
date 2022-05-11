#include <stdio.h>
#include <string.h>
void reserve(char* str)
{
    int len = strlen(str);
    char tmp = *str;
    *str = *(str + len - 1);
    *(str + len - 1) = '\0';
    if(strlen(str + 1) >= 2)
    {
        reserve(str + 1);
    }
    *(str + len - 1) = tmp;
}
int main()
{
    char ch[10000] = { 0 };
    gets(ch);
    reserve(ch);
    printf("%s\n", ch);
    return 0;
}