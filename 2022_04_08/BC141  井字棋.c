#include <stdio.h>
int main(){
    char board[3][3] = { 0 };
    char flag = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            scanf(" %c", &board[i][j]);
    }
    for (int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != 'O'){
            flag = board[i][2];
            break;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 'O'){
            flag = board[2][i];
            break;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != 'O')
        flag = board[2][2];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != 'O')
        flag = board[2][0];
    if ('K' == flag)
        printf("KiKi wins!\n");
    else if ('B' == flag)
        printf("BoBo wins!\n");
    else
        printf("No winner!\n");
    return 0;
}