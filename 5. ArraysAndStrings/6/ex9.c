#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    char *ptr_pg = &pg[0][0];
    srand(time(NULL));
    for(int i = 0; i < 12; i++) {
        printf("\n");
        ptr_pg = &pg[0][0];
        while(SIZE) {
            int x = rand() % 10, y = rand() % 10;
            bool res = 1;
            for(int i=-1; i<2; i++)
                for(int j=-1; j<2; j++)
                    res*=pg[x+i][y+j]==0;
            if(res) {
                pg[x][y] = '*';
                for(int j = 0; j < SIZE * SIZE; j++)
                    printf(((j + 1) % 10 == 0) ? "%d\n" : "%d ", *ptr_pg++);
                break; 
            }
        }
    }

    return 0;
}