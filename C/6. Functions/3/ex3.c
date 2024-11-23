#include <stdio.h>
#include <math.h>

double get_geom(int, int);

int main(void)
{
    int a, b;
    scanf("%d, %d", &a, &b);
    double res = get_geom(a, b);
    printf("%.2f", res);

    return 0;
}

double get_geom(int a, int b)
{
    return pow((double)a * (double)b, 0.5);
}