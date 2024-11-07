#include <stdio.h>

int main(void)
{
    double value, sum = 0;
    char cnt = 0;

    while(scanf("%lf", &value) == 1) {
        sum += value;
        cnt++;
    }

    printf("%.2f", sum / (double)cnt);

    return 0;
}