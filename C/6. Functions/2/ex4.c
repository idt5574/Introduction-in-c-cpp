#include <stdio.h>

double get_mean2(double n, double m)
{
    double res = (n + m) / 2.0;
    return res;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double res = get_mean2(a, b);
    printf("%.1f", res);

    return 0;
}