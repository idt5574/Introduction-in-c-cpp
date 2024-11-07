#include <stdio.h>

int main(void)
{
    short a, b, c;

    scanf("%hd %hd", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);

    return 0;
}