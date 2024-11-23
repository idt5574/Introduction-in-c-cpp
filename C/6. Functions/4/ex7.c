#include <stdio.h>

#define SIZE    4

void transpose(const short (*ar)[SIZE], short* res)
{
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j){
            *res++ = ar[j][i];
        }
    }
}

int main(void)
{
    short res[SIZE][SIZE];
    short* ptr_res = &res[0][0];
    short matrix[SIZE][SIZE] = {0};
    short* ptr = &matrix[0][0];
    int count = 0;
    while(count < SIZE * SIZE && scanf("%hd", ptr) == 1) {
        ptr++;
        count++;
    }

    transpose(&matrix[0], ptr_res);

    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            if(j != SIZE - 1) printf("%d ", res[i][j]);
            else printf("%d\n", res[i][j]);

    return 0;
}