#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int flag = 1;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i == 1 && arr[0] < arr[1]){
            flag = 0;
        }
        if(i > 0){
            if(flag == 1){
                if(arr[i - 1] < arr[i]){
                    printf("unsorted\n");
                    return 0;
                }
            }
            else{
                if(arr[i - 1] > arr[i]){
                    printf("unsorted\n");
                    return 0;
                }
            }
        }
    }
    printf("sorted\n");
    return 0;
}