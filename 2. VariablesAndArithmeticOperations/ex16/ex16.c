#include <stdio.h>

int main(void)
{
    long a;
    double b, c;

    scanf("%li %lf %lf", &a, &b, &c);
    printf("%d %.2f %.2f", a, b, c);

    return 0;
}