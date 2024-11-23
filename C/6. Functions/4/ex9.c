#include <stdio.h>

#define SIZE    3

int is_win(const char ar[SIZE][SIZE]);

int main(void)
{
    char pole[SIZE][SIZE] = {0};
    char* ptr_p = &pole[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%d", ptr_p) == 1) {
        *ptr_p = (*ptr_p == 1) ? 'x' : (*ptr_p == 2) ? 'o': *ptr_p;
        ptr_p++;
        count++;
    }

    int res = is_win(pole);
    printf("%d", res);

    return 0;
}

int is_win(const char ar[SIZE][SIZE])
{
    char flag = 1;

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            if(ar[i][j] == 0) {
                flag = 0;
                break;
            }
    
    for(int i = 0; i < SIZE; i++) {
        if(ar[i][0] == 'x' && ar[i][1] == 'x' && ar[i][2] == 'x') return 1;
        if(ar[i][0] == 'o' && ar[i][1] == 'o' && ar[i][2] == 'o') return 2;
        if(ar[0][i] == 'x' && ar[1][i] == 'x' && ar[2][i] == 'x') return 1;
        if(ar[0][i] == 'o' && ar[1][i] == 'o' && ar[2][i] == 'o') return 2;
    }

    if(ar[0][0] == 'x' && ar[1][1] == 'x' && ar[2][2] == 'x') return 1;
    if(ar[0][2] == 'o' && ar[1][1] == 'o' && ar[2][0] == 'o') return 2;

    if(flag) return 3;
    else return 0;
}