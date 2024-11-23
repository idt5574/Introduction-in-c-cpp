#include <stdio.h>

int main(void)
{
    int a;
    short b;
    float c;
    double d;

    scanf("%d %hd %f %lf", &a, &b, &c, &d);
    printf("%- 6d %- 6d %- 6.2f %- 5.2f", a, b, c, d);

    return 0;
}