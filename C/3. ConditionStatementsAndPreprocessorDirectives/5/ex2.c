#include <stdio.h>

int main(void)
{
    unsigned char bits;
    unsigned char mask = 40;
    scanf("%hhu", &bits);

    if( (bits & mask) == mask) {
        printf("%d", bits);
    } else {
        printf("-1");
    }

    return 0;
}