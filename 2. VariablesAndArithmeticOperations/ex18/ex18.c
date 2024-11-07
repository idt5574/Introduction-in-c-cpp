#include <stdio.h>

int main(void)
{
    double a, b, c, d, e;

    scanf("%*lf; %*lf; %*lf; %*lf; %*lf; %lf; %lf; %lf; %lf; %lf", &a, &b, &c, &d, &e);
    printf("%.1f %.1f %.1f %.1f %.1f", a, b, c, d, e);

    return 0;
}