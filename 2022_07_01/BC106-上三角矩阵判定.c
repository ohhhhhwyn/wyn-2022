#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    int flag = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
            if(j < i && arr[i][j] != 0){
                flag = 0;
            }
        }
    }
    if(flag == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");    
    }
    return 0;
}