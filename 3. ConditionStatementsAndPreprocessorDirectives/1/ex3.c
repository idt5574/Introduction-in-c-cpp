#include <stdio.h>
int main(void)
{
    double a;
    scanf("%lf", &a);
    _Bool x = -5.45 > a || a > 10.37;
    printf("%d", !x);

    return 0;
}