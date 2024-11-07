#include <stdio.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double res = (a *= 2) + (b *= 2);
    printf("Периметр: %.1f", res);

    return 0;
}