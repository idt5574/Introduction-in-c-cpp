#include <stdio.h>

int main(void)
{
    unsigned char h = 17, m = 45, s = 5;

    printf("%#x:%#x:%#04x", h, m, s);

    return 0;
}