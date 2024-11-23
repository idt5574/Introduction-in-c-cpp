#include <stdio.h>

int main(void)
{
    char a;
    scanf("%hhd", &a);
    double r = 1.732 * (double) a / 6.0;
    printf("%.3f", r);

    return 0;
}