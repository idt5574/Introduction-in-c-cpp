#include <stdio.h>

#define PI 3.1415

double circle_len(double);

int main(void)
{
    double r;
    scanf("%lf", &r);
    double res = circle_len(r);
    printf("%.2f", res);

    return 0;
}

double circle_len(double radius)
{
    return 2.0 * PI * radius;
}