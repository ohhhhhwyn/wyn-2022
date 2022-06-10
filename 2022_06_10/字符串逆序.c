#include <stdio.h>
void reverse(char* str){
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++){
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}
int main()
{
    char str[10000];
    gets(str);
    reverse(str);
    printf("%s\n", str);
    return 0;
}