#include <stdio.h>

int main(void)
{
    double a, b, c;
    double min = 100000.0;
    if(scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Input error.");
        return 0;
    }

    if(min > a) min = a;
    if(min > b) min = b;
    if(min > c) min = c;

    printf("%.2f", min);

    return 0;
}