#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    scanf("%lf", &a);

    printf("%.1lf", sin(a * 3.1415 / 180));

    return 0;
}