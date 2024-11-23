#include <stdio.h>

int main(void)
{
    double r;
    scanf("%lf", &r);
    double length = 2.0 * 3.1415 * r;
    printf("%.3f", length);

    return 0;
}