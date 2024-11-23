#include <stdio.h>

#define ROWS    3
#define COLS    4

int main(void)
{
    int a[ROWS][COLS] = {0};
    int b[ROWS][COLS] = {0};
    int res[ROWS][COLS] = {0};
    int *ptr_a = &a[0][0];
    int *ptr_b = &b[0][0];
    int *ptr_res = &res[0][0];

    int x;
    for(int i = 0;i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_a++ = x;
    for(int i = 0;i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_b++ = x;

    ptr_a = &a[0][0];
    ptr_b = &b[0][0];
    for(int i = 0;i < ROWS * COLS; ++i)
        *ptr_res++ = *ptr_a++ + *ptr_b++;
    
    ptr_res = &res[0][0];
    for(int i = 0; i < ROWS * COLS; ++i)
        printf((i + 1) % 4 == 0 && i > 0 ? "%d\n" : "%d ", *ptr_res++);
    

    return 0;
}