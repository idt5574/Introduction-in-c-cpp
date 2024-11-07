#include <stdio.h>

int main(void)
{
    int h, w;
    double x;

    scanf("%d %d", &h, &w);
    x = (double) h / (double) w;
    printf("%d", x);

    return 0;
}