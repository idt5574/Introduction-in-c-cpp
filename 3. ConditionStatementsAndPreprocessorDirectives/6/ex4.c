#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);

    double c = (rand() / (double)RAND_MAX)* (b - a) + a,
    d = (rand() / (double)RAND_MAX) * (b - a) + a,
    e = (rand() / (double)RAND_MAX) * (b - a) + a,
    f = (rand() / (double)RAND_MAX) * (b - a) + a,
    g = (rand() / (double)RAND_MAX) * (b - a) + a,
    h = (rand() / (double)RAND_MAX) * (b - a) + a,
    i = (rand() / (double)RAND_MAX) * (b - a) + a,
    j = (rand() / (double)RAND_MAX) * (b - a) + a,
    k = (rand() / (double)RAND_MAX) * (b - a) + a,
    l = (rand() / (double)RAND_MAX) * (b - a) + a;

    printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f", c, d, e, f, g, h, i, j, k, l);

    return 0;
}