#include <stdio.h>

int main(void)
{
    unsigned int a, b;
    scanf("%d %d", &a, &b);

    a = a >> 1;
    b = b >> 1;
    printf("%d", a * b);

    return 0;
}   