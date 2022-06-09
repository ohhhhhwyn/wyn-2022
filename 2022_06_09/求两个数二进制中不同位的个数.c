#include <stdio.h>
int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);
    int count = 0;
    for(int i = 0; i < 32; i++){
        if(((n >> i) & 1) != ((m >> i) & 1)){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}