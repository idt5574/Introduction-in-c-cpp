#include <stdio.h>

int calc_rect(int, int, int);

int main(void)
{
    int a, b, t;
    scanf("%d, %d, %d", &a, &b, &t);

    int res = calc_rect(a, b, t);

    printf("%d", res);

    return 0;
}

int calc_rect(int a, int b, int type)
{
    if(type == 1)
        return a * b;
    else
        return (a + b) * 2;
}