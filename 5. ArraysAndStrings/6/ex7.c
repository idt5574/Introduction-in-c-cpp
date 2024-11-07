#include <stdio.h>

#define ROWS    3
#define COLS    5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];
    double mean[3];

    short x;
    for(int i = 0;i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;

    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 5; j++)
            sum += vls[i][j];
        mean[i] = (double) sum / 5.0;
        printf("%.2f ", mean[i]);
    }

    return 0;
}