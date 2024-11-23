#include <stdio.h>

int main(void)
{
    long a;
    short b;
    double c;

    scanf("%li, %hd, %*lf, %lf", &a, &b, &c);
    printf("%d %d %.2f", a, b, c);

    return 0;
}