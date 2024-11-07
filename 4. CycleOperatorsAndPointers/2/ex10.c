#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int sum1 = a / 100000 + (a / 10000) % 10 + (a / 1000) % 10;
    int sum2 = (a / 100) % 10 + (a / 10) % 10 + a % 10;
    printf(sum1 != sum2 ? "no" : "yes");

    return 0;
}