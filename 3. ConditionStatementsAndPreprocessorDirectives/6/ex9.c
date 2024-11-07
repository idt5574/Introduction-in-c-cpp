#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);

    double tg = (double)a / (double)b;

    printf("%.2lf %.2lf", tg, atan(tg));

    return 0;
}