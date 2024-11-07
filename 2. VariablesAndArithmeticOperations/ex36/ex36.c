#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    double res = ((double)a * 2) * ((100.0 - (double)b) / 100.0);
    printf("%.2f", res);

    return 0;
}