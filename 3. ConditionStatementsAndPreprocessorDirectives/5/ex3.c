#include <stdio.h>

int main(void)
{
    unsigned char mask = 192;
    unsigned char bits;
    scanf("%hhu", &bits);

    bits = bits & ~mask;
    printf("%d", bits);

    return 0;
}