#include <stdio.h>

int main(void)
{
    char a, b, h;
    scanf("%hhd, %hhd, %hhd", &a, &b, &h);
    double S = ((double) a + (double) b) * (double) h / 2.0;
    printf("%0.1f", S);

    return 0;
}