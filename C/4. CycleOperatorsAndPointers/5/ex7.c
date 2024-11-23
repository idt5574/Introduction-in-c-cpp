#include <stdio.h>

int main(void)
{
    short a, b;

    scanf("%hd", &b);

    short *ptr_a = &a;
    *ptr_a = b;
    printf("%d", a);

    return 0;
}