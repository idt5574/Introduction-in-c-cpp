#include <stdio.h>

int is_range(double x, double a, double b)
{
    int res = (x > a && x < b) ? 1 : 0;
    return res;
}

int main(void)
{
    static double a = -2.5, b = 3.5;
    double x;
    while(scanf("%lf", &x) == 1) {
        if(!is_range(x, a, b)) printf("%.1f ", x);
    }

    return 0;
}