#include <stdio.h>
#include <math.h>

double get_length(int a, int b)
{
    double length = sqrt(a * a + b * b);
    return length;
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double res = get_length(a, b);
    printf("%.2f", res);

    return 0;
}