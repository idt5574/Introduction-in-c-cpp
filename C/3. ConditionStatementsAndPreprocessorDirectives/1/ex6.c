#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    bool x = (a <= -5 || a >= 10) || (b <= 0 || b >= 7);
    printf("%d", x);

    return 0;
}