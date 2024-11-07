#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double a;
    scanf("%lf", &a);
    bool x = (a < -10 || a >= 0) && (a <= 5 || a > 12);
    printf("%d", !x);

    return 0;
}