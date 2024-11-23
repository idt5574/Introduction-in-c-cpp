#include <stdio.h>

int main(void)
{
    short a, b, init_a, init_b;

    scanf("%hd, %hd", &a, &b);
    init_a = a; init_b = b;

    short *ptr_a = &a, *ptr_b = &b;
    init_a = *ptr_a;
    init_b = *ptr_b;
    a = init_b;
    b = init_a;

    return 0;
}