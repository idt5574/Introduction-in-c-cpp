#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, i = 0;
    double sum;
    scanf("%d", &a);
    while(++i <= a) sum += 1.0 / pow((double)i, 2);
    printf("%.3f", sum);

    return 0;
}