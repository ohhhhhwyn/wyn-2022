#include <stdio.h>
#include <string.h>
void reverse(char* string, int left, int right)
{
    while(left < right)
    {
        char tmp = string[left];
        string[left++] = string[right];
        string[right--] = tmp;
    }
}
int main()
{
    char string[101] = { 0 };
    gets(string);
    int length = strlen(string);
    int left = 0;
    int right = 0;
    for(int i = 0; i <= length; ++i)
    {
        if(string[i] == ' ' || string[i] == '\0')
        {
            right = i - 1;
            reverse(string, left, right);
            left = i + 1;
        }
    }
    reverse(string, 0, length - 1);
    printf("%s\n", string);
    return 0;
}